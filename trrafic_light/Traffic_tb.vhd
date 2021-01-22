library IEEE;
use IEEE.STD_LOGIC_1164.all;

use IEEE.numeric_std.all;

library std;
use std.textio.all;


entity Traffic_tb is
end Traffic_tb;

architecture beh of Traffic_tb is
 
 	-- Inputs
	signal Reset    :  std_logic := '0';
	signal Clock    :  std_logic := '0';
   
	signal CarNS    :  std_logic := '0'; -- Cross-road car
	signal PedNS    :  std_logic := '0'; -- Pedestrian crossing priority-road 
	signal PedEW    :  std_logic := '0'; -- Pedestrian crossing cross-road

	-- Outputs
	signal LightsEWslv :  std_logic_vector(1 downto 0); -- Priority-road lights
	signal LightsNSslv :  std_logic_vector(1 downto 0); -- Cross-road lights
	signal debugLED       :   std_logic_vector(3 downto 0); -- Cross-road light
	signal LEDs       :   std_logic_vector(2 downto 0); -- Cross-road light
   
   -- Lights as readable vales for simulation
   type LightType is ( RED, AMBER, GREEN, WALK);
   signal LightsEW : LightType := RED;
   signal LightsNS : LightType := RED;
   
   -- Internal
   signal complete : boolean := false;

   -- Encoding for lights
   constant L_RED    : std_logic_vector(1 downto 0) := "00";
   constant L_AMBER  : std_logic_vector(1 downto 0) := "01";
   constant L_GREEN  : std_logic_vector(1 downto 0) := "10";
   constant L_WALK   : std_logic_vector(1 downto 0) := "11";

   -- Using 100 Hz clock  
   constant period : time := 10 ns;
   
   -- Scaling used for time values
   constant timeScale : time := 1 ns; 

   signal   startTime            : time;
   signal   lastLightChangeTime  : time;
   
   -- TO suppress message at startup
   signal   quietTime : boolean := true;

   --=======================================================
   -- Reports light colour
   --=======================================================
   procedure reportLight(
      variable print_ptr : inout line;
      constant direction : string;
      constant lights    : std_logic_vector(1 downto 0) ) is

   begin
      case lights is
         when L_RED   =>  write(print_ptr, direction&"=L_RED   ");  
         when L_AMBER =>  write(print_ptr, direction&"=L_AMBER ");  
         when L_GREEN =>  write(print_ptr, direction&"=L_GREEN ");  
         when L_WALK  =>  write(print_ptr, direction&"=L_WALK  ");  
         when others =>
      end case;
   end procedure;
   
   --=======================================================
   -- Reports lights for both directions
   --=======================================================
   procedure reportLights(
      constant lNS    : std_logic_vector(1 downto 0);
      constant lEW    : std_logic_vector(1 downto 0)
      )   is
      
      variable  print_ptr : line;
   
   begin
      -- Ignore conversions at 0 ns as start-up values are noisy
      if (now /= 0 ns) then
         write(print_ptr, (now-startTime)/timeScale, right, 10); 
         write(print_ptr, string'(" ns : "));
         reportLight(print_ptr, "NS", lNS);
         reportLight(print_ptr, "EW", lEW);
         if (now /= startTime) then
            write(print_ptr, string'(" ( last change "));
            write(print_ptr, (now-lastLightChangeTime)/timeScale, right, 10); 
            write(print_ptr, string'(" ns )"));
         end if;
         write(output, print_ptr.all & lf);
         deallocate(print_ptr);
      end if;
   end procedure;
   
   --=======================================================
   -- Reports changes in inputs
   --=======================================================
   procedure reportInputs(
      signal carNS    : std_logic;
      signal pedNS    : std_logic;
      signal pedEW    : std_logic
      )   is
      
      variable  print_ptr : line;
   
   begin
      -- Ignore at 0 ns as start-up values are noisy
      if (now /= 0 ns) then
         write(print_ptr, (now-startTime)/timeScale, right, 10); 
         write(print_ptr, string'(" ns : "));
         if (carNS'event) then
            if (carNS = '1') then
               write(print_ptr, string'("carNS-Arrived "));
            else
               write(print_ptr, string'("carNS-Departed "));
            end if;
         end if;
         if (pedNS'event) then
            if (pedNS = '1') then
               write(print_ptr, string'("pedNS-Pressed "));
            else
               write(print_ptr, string'("pedNS-Released "));
            end if;
         end if;
         if (pedEW'event) then
            if (pedEW = '1') then
               write(print_ptr, string'("pedEW-Pressed "));
            else
               write(print_ptr, string'("pedEW-Released "));
            end if;
         end if;
         write(output, print_ptr.all & lf);
         deallocate(print_ptr);
      end if;
   end procedure;
   
begin

   --==========================================================================
   -- Convenience process to monitor lights and convert to readable enum values
   --==========================================================================
   light_proc:
   process(LightsEWslv, LightsNSslv)
   begin
      -- Ignore initially as start-up values from UUT are noisy
      if (not quietTime) then
         LightsEW <=LightType'VAL(to_integer(unsigned(LightsEWslv))); 
         LightsNS <=LightType'VAL(to_integer(unsigned(LightsNSslv))); 
      end if;
      quietTime <= false;
   end process;
   
   --=======================================================
   -- Convenient clock process that we can kill
   --=======================================================
   clkprocess:
   process
   begin
      while not complete loop
         clock <= '1'; wait for period/2;
         clock <= '0'; wait for period/2;
      end loop;
      
      wait;
   end process clkprocess;
    
   --=======================================================
   -- Instantiate the Unit Under Test
   --=======================================================   
   UUT:
   entity work.Traffic
       Port map ( 
         Reset    => Reset,  
         Clock    => Clock, 
			LEDs    => LEDs,
			debugLED => debugLED,
         -- Car and pedestrian buttons
         CarNS    => CarNS,
         PedEW    => PedEW,
         PedNS    => PedNS,

         -- Light control
         LightsEW => LightsEWslv,
         LightsNS => LightsNSslv
      );

   --=======================================================
   -- Reports changes in lights
   --=======================================================
   light_watching_proc :
   process (LightsNSslv, LightsEWslv)

      variable print_ptr : line;

   begin
      if (LightsNSslv'event or LightsEWslv'event) then
         reportLights(LightsNSslv, LightsEWslv);
         lastLightChangeTime <= now;
      end if;
   end process;
   
   --=======================================================
   -- Reports changes in car or pedestrians
   --=======================================================
   input_watching_proc :
   process (carNS, pedNS, pedEW)

      variable print_ptr : line;

   begin
      if (carNS'event or pedNS'event or pedEW'event) then
         reportInputs(carNS, pedNS, pedEW);
      end if;
   end process;
   
   --================================================================
   -- Check for car crashes or pedestrian fatalities
   --================================================================
   assert ((LightsNSslv /= L_GREEN) or (LightsEWslv = L_RED)) 
      report "(LightsNSslv = L_GREEN) while (LightsEWslv /= L_RED)" 
      severity failure ;
   assert ((LightsEWslv /= L_GREEN) or (LightsNSslv = L_RED)) 
      report "(LightsEWslv = L_GREEN) while (LightsNSslv /= L_RED)" 
      severity failure;
   assert ((LightsNSslv /= L_WALK)  or (LightsEWslv = L_RED)) 
      report "(LightsNSslv = L_WALK) while (LightsEWslv /= L_RED)" 
      severity failure ;
   assert ((LightsEWslv /= L_WALK)  or (LightsNSslv = L_RED)) 
      report "(LightsNSslv = L_WALK) while (LightsEWslv /= L_RED)" 
      severity failure ;

	stimulus_proc : 
   process
   
   --================================================================
   -- This starts a test:
   -- * Prints banner
   -- * Changes the stimulus inputs (carNSs, pedNSs, pedEWs)
   -- * Waits 1 clock cycle
   --================================================================
   procedure startTest(
      description : string;
      carNSs      : std_logic;   -- Value for cross-road car
      pedNSs      : std_logic;   -- Value for cross-road pedestrian
      pedEWs      : std_logic    -- Value for priority-road pedestrian
   ) is

      variable print_ptr   : line;
      
   begin
      startTime <= now;
      wait for 0 ns;
      
      -- Print banner
      write(print_ptr, string'("-------------------------------------------------------------------")); 
      write(print_ptr, lf & description & lf); 
      write(print_ptr, string'("-------------------------------------------------------------------")); 
      write(output, print_ptr.all & lf);
      deallocate(print_ptr);
      
      -- Report starting condition
      reportLights(LightsNSslv, LightsEWslv);
      
      -- Apply stiumuls for >=1 clock cycle
      carNS <= carNSs;
      pedNS <= pedNSs;
      pedEW <= pedEWs;
      
      -- Wait a clock cycle
      wait until rising_edge(clock);
   end procedure;
   
   --================================================================
   -- Change the stimulus values
   -- Waits 1 clock cycle
   --================================================================
   procedure changeStimulus(
      carNSs      : std_logic;   -- Value for cross-road car
      pedNSs      : std_logic;   -- Value for cross-road pedestrian
      pedEWs      : std_logic    -- Value for priority-road pedestrian
   ) is

   begin
      -- Apply stiumuls for >=1 clock cycle
      carNS <= carNSs;
      pedNS <= pedNSs;
      pedEW <= pedEWs;
      
      -- Wait a clock cycle
      wait until rising_edge(clock);
   end procedure;
   
   --================================================================
   -- Waits until the lights change once
   --================================================================
   procedure waitUntilLightsChange is

   begin
      wait until LightsNSslv'event or LightsEWslv'event;
      wait for 0 ns;
   end procedure;
   
   --================================================================
   -- Waits until the lights return to the long-term situaion 
   --   i.e. LightsNS=RED and LightsEW=GREEN;
   --================================================================
   procedure waitUntilLongTerm is

   begin
      wait until LightsNSslv=L_RED and LightsEWslv=L_GREEN;
      wait for 0 ns;
   end procedure;
   
   --================================================================
   -- Actions at end of test
   --================================================================
   procedure endOfTest is
      
   begin
      -- Closing banner
      write(output, string'("") & lf);
   end procedure;
   
   --================================================================
   -- This runs a simple test that consists of:
   -- * Changing the inputs (carNSs, pedNSs, pedEWs)
   -- * Waiting until all requests implied by above have been satisfied
   -- * Waiting until the lights return to the long-term situaion 
   --   i.e. LightsNSslv=L_RED and LightsEWslv=L_GREEN;
   -- Note:
   -- * The pedestrian inputs are only applied for 1 clock cycle.
   -- * The car input is applied until a GREEN car light is detected.   
   --================================================================
   procedure runSimpleTest(      
      carNSs      : std_logic;   -- Waiting car on cross-road
      pedNSs      : std_logic;   -- Waiting pedestrian crossing priority-road 
      pedEWs      : std_logic;   -- Waiting pedestrian crossing cross-road 
      description : string       -- Decritpion to print on console
   ) is
   
   variable needCarL_greeenNS : boolean;
   variable needPedL_greeenNS : boolean;
   variable needPedL_greeenEW : boolean;
   
   begin
      -- Record what we are waiting for
      needCarL_greeenNS := carNSs = '1';
      needPedL_greeenNS := pedNSs = '1';
      needPedL_greeenEW := pedEWs = '1';
      
      -- Print banner and apply initial stiumulus
      startTest(description, carNSs, pedNSs, pedEWs);
      
      -- Pedestrings are really quick at pressing the button
      -- Release after one clock cycle
      changeStimulus(carNSs, '0', '0');

      -- Keep waiting until all expected changes occur
      while (needCarL_greeenNS or needPedL_greeenNS or needPedL_greeenEW) loop
         waitUntilLightsChange;
      
         if (needCarL_greeenNS and ((LightsNSslv = L_GREEN) or (LightsNSslv = L_WALK))) then
            -- Car leaves on GREEN light
            -- Note NS-WALK also has NS-GREEN for car!
            changeStimulus('0', '0', '0');
            needCarL_greeenNS := false;
         end if;
         needPedL_greeenNS := needPedL_greeenNS and (LightsNSslv /= L_WALK);
         needPedL_greeenEW := needPedL_greeenEW and (LightsEWslv /= L_WALK);
      end loop;

      -- Wait until system returns to long-term situation
      waitUntilLongTerm;      
      
      -- Print closing banner 
      endOfTest;
   end procedure;

	begin
      -- Reset circuit
      reset <= '1';  wait for  period;
      reset <= '0'; wait for  period;-- wait until rising_edge(clock);
      
      -- Simulation assumes lights start L_GREEN EW after reset
      
      -- Tests
      --            carNS pedNS pedEW
      runSimpleTest('0',  '1',  '0', "Pedestrian arriving NS - crossing main road ");
      runSimpleTest('1',  '0',  '0', "Car arriving NS - on side road");
		  runSimpleTest('0',  '0',  '1', "Car arriving NS - on side road");
		    runSimpleTest('1',  '0',  '1', "Car arriving NS - on side road");
      
      --================================================================
      -- !!! Your additional tests !!!!
      --================================================================
      
      wait for 1 sec;
      
      complete <= true; -- end simulation
		wait; -- will wait forever
	end process;

end architecture beh;

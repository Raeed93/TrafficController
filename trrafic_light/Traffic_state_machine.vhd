
library IEEE; 

use IEEE.STD_LOGIC_1164.all; 

use IEEE.STD_LOGIC_ARITH.all; 

use IEEE.STD_LOGIC_UNSIGNED.all; 

entity Traffic is 

	port 

	( 
      --asycnron rest
		Reset 					: in STD_LOGIC; 

		Clock	 					: in STD_LOGIC; 

		-- 2 signals for debuge 
	
		debugLED 				: out std_logic_vector(3 downto 0); 

	 	LEDs     				: out std_logic_vector(2 downto 0); 

		-- Car and pedestrian buttons 

		CarNS 					: in STD_LOGIC; -- Car on NS road 

		PedEW 					: in STD_LOGIC; -- Pedestrian moving EW (crossing NS road) 

		PedNS 					: in STD_LOGIC; -- Pedestrian moving NS (crossing EW road) 

		-- Light control 

		LightsEW 				: out STD_LOGIC_VECTOR (1 downto 0);   -- controls EW lights 

		LightsNS 				: out STD_LOGIC_VECTOR (1 downto 0)    -- controls NS lights 

	); 

end entity; 

 
architecture Behavioral of Traffic is 

		signal clear    	  : std_logic; 

		-- signals that will be connected between state machine and counter modules 
		-- When the counter reaches the target value, it becomes signal 1.

		signal car_time   	: std_logic; 

		signal ped_time	   : std_logic; 

		signal amber_time 	: std_logic; 
		
		-- signals for inputs after the flip flop is used 

		signal CarNS_sync 	: STD_LOGIC;

		signal PedEW_sync 	: STD_LOGIC; 

		signal PedNS_sync 	: STD_LOGIC; 

begin

		--Observe the timer status
		
		debugLED(3) <= amber_time;
		
		debugLED(2) <= car_time;
		
		debugLED(1) <= ped_time;

synchroniser: 

	process (reset, clock) 

	begin 

		--reset  everything to start at 0 initially 

		if (reset = '1') then  

			PedEW_sync <= '0'; 

			PedNS_sync <= '0'; 

			CarNS_sync <= '0'; 

		elsif rising_edge(clock) then -- each rising edge of the clock needs to make sure that all inputs are synchronised together so we are assigning whenever an input was held or pressed to a flip flop that saves it and updates it every rising edge of the clock 

			PedEW_sync <= PedEW;      -- PedEW is the original input while PedEW_sync is the signal pedEW being assigned to a flip flop for sync 

			PedNS_sync <= PedNS;  

			CarNS_sync <= CarNS; 

		end if; 

	end process synchroniser; 

-- Show reset status on FPGA LED 

   debugLed(0) <= Reset; 
--instance counter moudole 
theCounter: 

	entity work.counter_top  

			port map  

			( 

			reset => reset,  

			clock => clock, 

			clear => clear,  

			car_time => car_time, 

			ped_time => ped_time, 

			amber_time => amber_time 

			);  

State_machine: 

		entity work.Traffic_state_machine  

		port map 

		( 

		Reset => Reset, -- assigning ports from state machine to its equivalent in the top_level module as these will be part of both the counter and state machine 

		Clock => Clock, 

		clear => clear,  

		car_time => car_time,  

		ped_time => ped_time, 

		amber_time => amber_time, 

		CarNS => CarNS_sync, 

		PedEW => PedEW_sync, 

		PedNS => PedNS_sync, 

		-- Light control 

		LightsEW => LightsEW, 

		LightsNS => LightsNS,
		LEDs     => LEDs 

		); 

end architecture;
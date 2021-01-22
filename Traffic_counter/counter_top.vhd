library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- counter 

entity counter_top is
 port(
   reset      : in std_logic;
   clock      : in std_logic;
	clear      : in std_logic;	
   car_time   : out std_logic;
   ped_time   : out std_logic;
   amber_time : out std_logic
	
	); 

end entity;

architecture beh of counter_top is 

  signal count : natural range 0 to 300;  -- 
  constant car_time_const : natural := 300; 
  constant ped_time_const : natural := 200;
  constant amber_time_const : natural := 100;  

begin
  process(reset, clock)
  begin

    if (reset = '1') then 
    count <= 0;

    elsif rising_edge(clock) then  -- if clear is detected due to traffic light time finishing then we also clear the counter (reseting it)
       if (clear = '1') then 
       count <= 0;
       else 
       count <= count + 1; -- if the time limit is not reached we will count up untill we reach and clear the time
       end if;
     end if;

   end process;
	
Car_time <= '1' when (count = car_time_const) else '0'; -- continue counting the counter up until counter = car_time_const 
Ped_time <= '1' when (count = ped_time_const) else '0';
Amber_time <= '1' when (count = amber_time_const) else '0';

end architecture;




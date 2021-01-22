library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
-- counter 

entity counter_traffic_code 
   reset  : in std_logic;
   clock  : in std_logic;
   clear      : out std_logic;

   car_time   : out std_logic;
   ped_time   : out std_logic;
   amber_time : out std_logic;

end entity;

architecture Behavioral of counter_traffic_code is

  signal count : natural range 0 to 200;

begin
  process(reset, clock)
  begin

    if (reset = '1') then 
    count <= 1;

    elsif rising_edge(clock) then
       if (clear = '1') then 
       count <= 1;
       else 
       count <= count + 1;
       end if;
     end if;

   end process;
Car_time <= '1' when (count = 20) else '0';
Ped_time <= '1' when (count = 15) else '0';
Amber_time <= '1'when (count = 10) else '0';

end Behavioral;


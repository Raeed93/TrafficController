----------------------------------------------------------------------------------
--  Traffic.vhd
--
-- Traffic light system to control an intersection
--
-- Accepts inputs from two car sensors and two pedestrian call buttons
-- Controls two sets of lights consisting of Red, Amber and Green traffic lights and
-- a pedestrian walk light.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_LOGIC_UNSIGNED.all;

entity Traffic_top_level is
    port
    (
        Reset    : in STD_LOGIC;
        Clock    : in STD_LOGIC;
		  
		  

		  
        -- for debug
        debugLED : out std_logic;
        LEDs     : out std_logic_vector(2 downto 0);

        -- Car and pedestrian buttons
        CarEW    : in STD_LOGIC; -- Car on EW road
        CarNS    : in STD_LOGIC; -- Car on NS road
        PedEW    : in STD_LOGIC; -- Pedestrian moving EW (crossing NS road)
        PedNS    : in STD_LOGIC; -- Pedestrian moving NS (crossing EW road)

        -- Light control
        LightsEW : out STD_LOGIC_VECTOR (1 downto 0); -- controls EW lights
        LightsNS : out STD_LOGIC_VECTOR (1 downto 0)  -- controls NS lights
		  
--		  ped_button : in STD_LOGIC;
    );
end entity;

architecture Behavioral of Traffic_top_level is

signal clear       : std_logic;	-- signals that will be connected between state machine and counter modules
signal car_time    : std_logic;
signal ped_time    : std_logic;
signal amber_time  : std_logic;

signal CarEW_sync    : STD_LOGIC; 
signal CarNS_sync    : STD_LOGIC; -- signals for inputs after the flip flop is used
signal PedEW_sync    : STD_LOGIC;
signal PedNS_sync    : STD_LOGIC;

begin

synchroniser:
process (reset, clock)
begin
  if (reset = '1') then -- when we reset we want everything to start at 0 initially
    PedEW_sync <= '0';
	 PedNS_sync <= '0';
	 CarNS_sync <= '0';
	 CarEW_sync <= '0';
	 
	 
  elsif rising_edge(clock) then  -- each rising edge of the clock needs to make sure that all inputs are synchronised together so we are assigning whenever an input was held or pressed to a flip flop that saves it and updates it every rising edge of the clock
    PedEW_sync <= PedEW;  -- PedEW is the original input while PedEW_sync is the signal pedEW being assigned to a flip flop for sync
	 PedNS_sync <= PedNS;
	 CarEW_sync <= CarEW;
	 CarNS_sync <= CarNS;
	 
	end if;
  end process synchroniser;
	 
    -- Show reset status on FPGA LED
    debugLed <= Reset;

    -- Threee LEDs for debug 
    LEDs <= "000";

theCount:
entity work.counter_top 
 port map 
   (
   reset      => reset, 
   clock      => clock,
	clear      => clear,	
   car_time   => car_time,
   ped_time   => ped_time,
   amber_time => amber_time
	); 

State_machine:
entity work.Traffic_state_machine 
    port map
    (
        Reset      => Reset,  -- assigning ports from state machine to its equivalent in the top_level module as these will be part of both the counter and state machine
        Clock      => Clock,
		  clear      => clear,	
        car_time   => car_time, 
        ped_time   => ped_time,
        amber_time => amber_time,

        CarEW      => CarEW_sync,
        CarNS      => CarNS_sync,
        PedEW      => PedEW_sync,
        PedNS      => PedNS_sync,
		  
        -- Light control
        LightsEW   => LightsEW,
        LightsNS   => LightsNS
    );
end architecture;
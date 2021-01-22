-- Traffic.vhd 

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

entity Traffic_state_machine is 

				port 

						( 

								Reset 			: in STD_LOGIC; 

								Clock 			: in STD_LOGIC; 

								Clear 			: out STD_LOGIC; 

								car_time		   : in std_logic; 
  
								ped_time 		: in std_logic; 

								amber_time 		: in std_logic; 

								-- Car and pedestrian buttons 

								CarEW 			: in STD_LOGIC; -- Car on EW road 

								CarNS 			: in STD_LOGIC; -- Car on NS road 
	
								PedEW 			: in STD_LOGIC; -- Pedestrian moving EW (crossing NS road) 

								PedNS 			: in STD_LOGIC; -- Pedestrian moving NS (crossing EW road) 

								-- Light control 

								LightsEW 		: out STD_LOGIC_VECTOR (1 downto 0); -- controls EW lights 

								LightsNS 		: out STD_LOGIC_VECTOR (1 downto 0) -- controls NS lights 

				); 

end Traffic_state_machine; 

architecture Behavioral of Traffic_state_machine is 

				-- Encoding for lights 

				constant RED   : std_logic_vector(1 downto 0) := "00"; 

				constant AMBER : std_logic_vector(1 downto 0) := "01"; 

				constant GREEN : std_logic_vector(1 downto 0) := "10"; 

				constant WALK  : std_logic_vector(1 downto 0) := "11"; 

				type state_type is (EW_Green, EW_Amber, NSG, NS_Amber, NS_walk, EW_Walk); 

				signal state, next_state : state_type; 

				signal pedEW_temp     : STD_LOGIC;  -- signals that will each connect a flip flop to the state machine, recording whether the ped utton is saved as pressed or not pressed 

				signal pedNS_temp     : STD_LOGIC; 

				signal Clear_ped_NS   : STD_LOGIC;  -- 2 other signals directly going from the state machine to the flip flops to record whether we need to reset 

				signal Clear_ped_EW   : STD_LOGIC; 

				begin 

							sync : 

							process (Reset, clock) 

									begin 

										if   (Reset = '1') then 

												state <= EW_Green; 

										elsif rising_edge(clock) then 

												state <= next_state; 

									  end if; 
 
							end process; 

							ped_button_memory : 

							process (Reset, clock) 

							begin 

									if (Reset = '1') then --REMEMBER PEDNS AND PED EW ARE THE ORIGINAL INPUTS, THEY WILL NOT BE DIRECTLY WRITTEN IN THE STATE MACHINE 

											pedNS_temp <= '0'; 

											pedEW_temp <= '0'; 

									elsif rising_edge(clock) then 

										if (PedNS = '1') then -- when the ped button is pressed we save it as a '1' and assigning it to pedns_temp until the sstate is changed due to pedestrian light stopping its light 

													pedNS_temp <= '1'; 

										elsif (Clear_ped_NS = '1') then -- when we need to clear the ped button press we will go back to the initial pedNS_temp not being pressed 

													pedNS_temp <= '0'; 

										end if; 

										if (PedEW = '1') then 

													pedEW_temp <= '1'; 

										elsif (Clear_ped_EW = '1') then 

													PedEW_temp <= '0'; 

										end if; 

									end if; 

							end process; 

							comb_traffic : 

							process (state, CarEW, CarNS, PedEW_temp, pedNS_temp, car_time, ped_time, amber_time) 

							begin 

									lightsNS <= Red; -- default traffic light state 

									LightsEW <= Red; 

									clear   <= '0'; -- default time counter start 

									Clear_ped_NS <= '0';  

									clear_ped_EW <= '0'; 

									next_state <= state; 

									case state is 

									when EW_Green => 

										LightsEW <= GREEN; 

										if (car_time = '1') then ----------- 

											clear <= '1'; --------------- 

											if (pedNS_temp = '1' or CarNS = '1') then 

												next_state <= EW_Amber; 

											elsif (PedEW_temp = '1') then 

												next_state <= EW_Walk; 

											end if; 

										end if; 

									when EW_Walk => 

										lightsEW <= Walk; 

										clear_ped_EW <= '1'; -- clearing the pedestrian button press 

										if (ped_time = '1') then  

											clear <= '1'; ---------- clear counter then go to next state 

											next_state <= EW_Green; 

										end if; 

									when EW_Amber => 

										LightsEW <= Amber; 

										if (amber_time = '1') then --- amber time reached so reset counter and move to next state depending on whether the ped has pressed the button or not 

										clear <= '1'; 

											if (pedNS_temp = '1') then 

												next_state <= NS_Walk; 

											else 

												next_state <= NSG; 

											end if; 

										end if; 

									when NSG => 

										LightsNS <= Green; 

										if (car_time = '1') then 

											clear <= '1'; ---------------------- counter 

											if (PedEW_temp = '1' or CarEW = '1') then 

													next_state <= NS_Amber; 

											elsif (pedNS_temp = '1') then 

													next_state <= NS_Walk; 

											end if; 

										end if; 

									when NS_walk => 

										LightsNS <= Walk; 

										Clear_ped_NS <= '1'; -- clear  

										if (ped_time = '1') then 

											clear <= '1'; 

											next_state <= NSG; 

										end if; 

									when NS_Amber => 

										LightsNS <= Amber; 

										if (amber_time = '1') then ---counter addition 

											clear <= '1'; 

											if (PedEW_temp = '1') then 

												next_state <= EW_walk; 

											else 

												next_state <= EW_Green; 

										end if; 

										end if; 

							end case; 

							end process; 

end architecture;
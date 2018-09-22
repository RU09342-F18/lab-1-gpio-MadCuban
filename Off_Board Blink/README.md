# Lab 1: Off-Board Blink for MSP430G2
Tiernan Cuesta |
Embedded Systems Section 4 |
September 21, 2018
# Functionality
The off-board blink build was executed using the same code as the multi blink build for the G2. Therefore the functionality is the same where the green and red LEDs are both blinking but at different rates.
# Valid Inputs/Outputs
The
# Description of Code
The two programs are layed out in an almost identical fashion because the expressions themselves need not change because the desired functionality is the same. The subtle differences between the two is the port and pin assignments since they vary from chip to chip. For example, in the FR2311 program the red LED is assigned to Port 2 pin 0, where the red LEDs pin assignment for the G2 is Port 1 pin 6. Throughout the program it is paramount to make sure the assignments are consistent. Now, for these programs there is another k integer in addition to the original i and j integers in the previous builds. The variable k is incremented by the press of the button. When k is incremented the speed of the two blinking LEDs increases. Once k is greater than 2 it is reset back to 0, hence the LEDs went from fast speed back to normal speed after a 1 second delay interval. The delays and toggling of the LEDs was implemented identical to the previous builds. Comments within the hard code have more detailed description of almost every line of code. (besides obvious lines)

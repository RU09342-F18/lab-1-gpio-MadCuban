# Lab 1: Off-Board Blink for MSP430G2
Tiernan Cuesta |
Embedded Systems Section 4 |
September 21, 2018
# Functionality
The off-board blink build was executed using the same code as the multi blink build for the G2. Therefore the functionality is the same where the green and red LEDs are both blinking but at different rates. A snippet of the off-board circuit can be found in the Off_Board blink folder.
# Valid Inputs/Outputs
For these programs there are no inputs, only in that you can internally condition of the if-statements to change the speed of the toggling. Valid outputs are P1.0 = 0 or P1.0 = 1 for both of the chips. In the case that P1.0 = 0 the LED is switched off, and in the case that P1.0 = 1 the LED is turned on. The same holds true for the cooresponding red LED pinouts.
# Description of Code
Each toggling of the LED's are done with if statements that only executes if i or j is greater than the specified value in the condition. After the two LED's are toggled i and j are reset back to 0 to resume counting again. More detailed descriptions of each line of code are commented out.

# Lab 1: Multi Blink for MSP430G2 and MSP430F5529
Tiernan Cuesta //
Embedded Systems Section 4 //
September 21, 2018 //
# Functionality
The two main.c files for the MSP430G2 and MSP430F5529 are identical in functionality. Both programs drive two LEDs, one green LED and one red LED. Each LED is meant to be driven at different speeds. For this, two variables were used, i and j to control the two seperate LEDs.  
# Valid Inputs/Outputs
For these programs there are no inputs, only in that you can internally condition of the if-statements to change the speed of the toggling. Valid outputs are P1.0 = 0 or P1.0 = 1 for both of the chips. In the case that P1.0 = 0 the LED is switched off, and in the case that P1.0 = 1 the LED is turned on. The same holds true for the cooresponding red LED pinouts.
# Description of Code
The two programs are layed out in an almost identical fashion because the expressions themselves need not change because the desired functionality is the same. The subtle differences between the two is the port and pin assignments since they vary from chip to chip. For example, in the F5 program the red LED is assigned to Port 4 pin 7, where the red LEDs pin assignment for the G2 is Port 1 pin 7. Throughout the program it is paramount to make sure the assignments are consistent. Now, each toggling of the LED's are done with if statements that only executes if i or j is greater than the specified value in the condition. After the two LED's are toggled i and j are reset back to 0 to resume counting again.

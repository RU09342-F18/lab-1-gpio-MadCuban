# Lab 1: Simple Blink for MSP430G2 and MSP432P4 
Tiernan Cuesta |
Embedded Systems Section 4 |
September 21, 2018 |
# Functionality
The two main.c files for the MSP430G2 and MSP432P4 are identical in functionality. Both programs drive a single green LED, both LED's pinout is P1.0. This is a very simple program where the LED's speed can only be adjusted in the code itself, not in realtime. The value of variable 'i' is inversely proportional to the speed of the LED.
# Valid Inputs/Outputs
For these programs there are no inputs, only in that you can internally change the value of i to change the speed of the toggling. Valid outputs are P1.0 = 0 or P1.0 = 1 for both of the chips. In the case that P1.0 = 0 the LED is switched off, and in the case that P1.0 = 1 the LED is turned on.
# Description of Code
The two programs are layed out in an almost identical fashion because the expressions themselves need not change because the desired functionality is the same. The subtle differences between the two is the "Stop watchdog timer" statement because they are instantiated slightly different between the two processors. Also, the .h file at the top of the code is the cooresponding header file for that specific processor under test. The program continously cycles through a for-loop. Inside of the for-loop pin 1 is toggled by an XOR statement, this is what turns the LED on or off depending on its current state. Also the integer i is assigned its value and a do-while loop decrements i untill it is zero as a method of delaying the program before it toggles the LED again.
 

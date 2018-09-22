# Lab 1: Simple Blink for MSP430G2 and MSP432P4 
Tiernan Cuesta
Embedded Systems Section 4
September 21, 2018
# Functionality
The two main.c files for the MSP430G2 and MSP432P4 are almost identical in functionality. Both programs drive a single green LED, both LED's pinout is P1.0. No buttons 
# Valid Inputs/Outputs
Valid inputs are two integers and an operator symbol whether it be an arithmatic or logic symbol. Valid outputs consist of a full arithematic expression or an error message because an operator was selected that this program does not support.
# Description of Code
The implementation of the main.c file was developed by first creating our 3 inputs previously stated. The arithematic for each operation was implemented inside of a switch function where different cases were called depending on the operator input from the user. For example, if the user types in + the switch function will call the addition fucntion and add the two integers also input by the user. A default function is implemented in case of an un-supported operator.

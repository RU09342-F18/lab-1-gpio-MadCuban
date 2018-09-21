//Tiernan Cuesta
//Version: 1
//Revised 9/21
//Lab 1: Simple blink


#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  P1DIR |= 0x01;                            // Set P1.0 to output direction

  for (;;)
  {
    volatile unsigned int i; //initializes integer i, a counter/delay variable for P1.0

    P1OUT ^= 0x01;                          // Toggle P1.0 using XOR

    i = 50000;                              // Delay period
    do (i--);
    while (i != 0);                         // decrements i while it does not equal 0
  }
}

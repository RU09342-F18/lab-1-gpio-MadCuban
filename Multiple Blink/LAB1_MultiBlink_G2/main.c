#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
  P1DIR |= 0x01;                            // Set P1.0 to output direction
  P1DIR |= 0x40;                            // Set P1.6 to output direction
  while(1)
  {
      volatile unsigned int i; // initializes integer i, a counter/delay variable for P1.0
      volatile unsigned int j; // initializes integer j, a counter/delay variable for P1.6

      i++; //increments i by one
      j++; //increments j by one
      if (i > 1000) //controls rate of blinking for green LED P1.0
      {
          P1OUT ^= 0x01; //toggles P1.0 by XOR ---- note: 0x01 = 0b00000001 = BIT0
          i = 0; //resets integer i back to zero to restart counter
      }
      if (j > 5000) //controls rate of blinking for red LED P1.6
      {
          P1OUT ^= 0x40; //toggles P1.6 by XOR ---- note: 0x40 = 0b01000000 = BIT6
          j = 0; //resets integer j back to zero to restart counter
      }
      }
}

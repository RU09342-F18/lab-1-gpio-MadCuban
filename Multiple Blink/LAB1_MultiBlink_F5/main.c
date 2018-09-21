//Tiernan Cuesta
//Version: 1
//Revised 9/21
//Lab 1: Multi blink with F5


#include <msp430.h> 

int main(void)
 {
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	  P1DIR |= 0x01;                            // Set P1.0 to output direction
	  P4DIR |= 0x80;                            // Set P4.7 to output direction
	  while(1)
	  {
	      volatile unsigned int i; // initializes integer i, a counter/delay variable for P1.0
	      volatile unsigned int j; // initializes integer j, a counter/delay variable for P4.7

	      i++; //increments i by one
	      j++; //increments j by one
	      if (i > 1000) //controls rate of blinking for green LED P1.0
	      {
	          P1OUT ^= 0x01; //toggles P1.0 by XOR ---- note: 0x01 = 0b00000001 = BIT0
	          i = 0; //resets integer i back to zero to restart counter
	      }
	      if (j > 5000) //controls rate of blinking for red LED P1.6
	      {
	          P4OUT ^= BIT7; //toggles P1.6 by XOR ---- note: 0x80 = 0b10000000 = BIT7
	          j = 0; //resets integer j back to zero to restart counter
	      }
	  }
	return 0;
}

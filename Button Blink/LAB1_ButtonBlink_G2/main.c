#include <msp430.h> 

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	  P1DIR |= 0x01;                            // Set P1.0 to output direction
	  P1DIR |= 0x40;                            // Set P1.6 to output direction
	  P1REN |= BIT3;
	  P1OUT = BIT3; // Sets P1.3, button, to an input
	  while(1)
	  {
	      volatile unsigned int i; // initializes integer i, a counter/delay variable for P1.0
	      volatile unsigned int j; // initializes integer j, a counter/delay variable for P1.6
	       volatile unsigned int k; //initializes integer k, a variable that holds the desired speed
	       if(!(P1IN & BIT3)) // if button 1.3 is pressed, k gets incremented by 1.
	       {
	       k++;
	       __delay_cycles(1000000);
	       }
	       if(k > 2)
	       {
	       k = 0;
	       }
	       if(k == 0) // normal speed condition
	       {
	       i++;
	       j++;
	       }
	       if(k == 1) // medium speed condition
	       {
	       i = i + 5;
	       j = j + 5;
	       }
	       if(k == 2) // fast speed condition
	       {
	       i = i + 10;
	       j = j + 10;
	       }


	      if (i > 10000) //controls rate of blinking for green LED P1.0 by changing the numerical value on the right side of the condition
	      {
	          P1OUT ^= 0x01; //toggles P1.0 by XOR ---- note: 0x01 = 0b00000001 = BIT0
	          i = 0; //resets integer i back to zero to restart counter
	      }
	      if (j > 50000) //controls rate of blinking for red LED P1.6 by changing the numerical value on the right side of the condition
	      {
	          P1OUT ^= 0x40; //toggles P1.6 by XOR ---- note: 0x40 = 0b01000000 = BIT6
	          j = 0; //resets integer j back to zero to restart counter
	      }
	   }
}

#include <util/delay.h>
#include <avr/io.h>
#define LED PORTB5  // Digital port 13 noted the board has an led on pin 13 already(should be yellow and be right below the pin)

int main(void)
{
	DDRB |= (1 << LED);   // This line sets only Digital port 13 to output all other pins are unaffected
    
		  

  
		 Note the code assumes you have the led connected to port B5
	while(1)   // this loop runs forever. 
    {
		PORTB |= (1 << LED);  // This line sets the output of pin 13 to high causing 5v across the Kathode
		_delay_ms(1000);   // delay for 1second
		PORTB &= (0 << LED);  // this line sets the output of pin 13 to 0v causing the led to be turned off
		_delay_ms(1000);   // delay for 1 second
    }
}

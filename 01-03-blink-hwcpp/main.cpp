#include "hwlib.hpp"

int main( void ){	

    
   // must be volatile to prevent optimization of the wait loops
   volatile int i;
   
   // disable the watchdog 
   SIM->COPC = 0;
   
   // enable the clock ti port B
   SIM->SCGC5 |= 0x1 << 10;
   
   // make the pin a GPIO
   PORTB->PCR[ 19 ] = PORT_PCR_MUX( 1 );
   
   // make the pin an output
   PTB->PDDR |= 0x1 << 19;
   
   // loop forever
   while( 1 ){ 
   
      // make the pin high
      PTB->PSOR = 0x1 << 19;
    
      // wait 
      for( i = 0; i < 900'000; i++ ){ 
      }
	
      // make the pin low
      PTB->PCOR = 0x1 << 19;


      // wait 
      for( i = 0; i < 900'000; i++ ){
      }
	
	}
    
}

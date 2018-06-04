#include "hwlib.hpp"

int main( void ){	

   // disable the watchdog 
   SIM->COPC = 0;
   
   hwlib::target::pin_out led( 1, 19 );
   
   while( 1 ){ 
       
      led.set( 1 );
     
      for( volatile int i = 0; i < 200'000; i++ ){}
      //hwlib::wait_ms( 200 );
      
      led.set( 0 );

      for( volatile int i = 0; i < 200'000; i++ ){}
      //hwlib::wait_ms( 200 );
	
	}
}

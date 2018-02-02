#include <avr/io.h>
#include <util/delay.h>
#define LED   0

int main(){
  DDRC = (1<<LED);            //Declaring PortC pin0 as output

  while(1){
    PORTC ^= (1<<LED);        //Toggling the digital iutput on PortC pin 0
    _delay_ms(100);
  }
  return 0;
}

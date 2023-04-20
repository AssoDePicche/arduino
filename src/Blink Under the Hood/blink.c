#define F_CPU 16000000
#define BLINK_DELAY 1000

#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

int main(void)
{
  DDRB |= _BV(PORTB5);

  while (true)
  {
    PORTB ^= _BV(PORTB5);

    _delay_ms(BLINK_DELAY);
  }

  return 0;
}

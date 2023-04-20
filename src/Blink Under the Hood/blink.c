#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define BLINK_DELAY 500

int main(void)
{
  // Put B5 in output mode

  DDRB |= _BV(PORTB5);

  while (true)
  {
    // Toggle the LED

    PORTB ^= _BV(PORTB5);

    _delay_ms(BLINK_DELAY);
  }

  return 0;
}

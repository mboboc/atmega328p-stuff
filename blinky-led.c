#include <avr/io.h>
#include <util/delay.h>

int main() {

	/* Set pin PB0 as output */
	DDRB |= (1 << PB1);

	/* Turn on LED */
	PORTB |= (1 << PB1);

	while (1) {
		/* Toggle pin state */
		PORTB ^= (1 << PB1);

		_delay_ms(500);
	}

	return 0;
}

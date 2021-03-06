/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Serial Parrot - example of Software UART.
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "uart.h"

int
main(void)
{
	char c;

	uart_puts("Hello Parrot!\n");

	while (1) {
		c = uart_getc();
		uart_putc(c);
	}
}

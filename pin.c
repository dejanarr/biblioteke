/*
 * @file pin.c
 * @brief Definisanje pin biblioteke
 * @author Kosana Pavlovic
 * @date 22-5-2022
 * @version 1.0
 */

#include "pin.h"

void pinInit(uint8_t port, uint8_t pin, uint8_t direction)
{
    switch (port)
    {
        case PORT_B:
            if (direction == OUTPUT)
                DDRB |= 1 << pin;
            else
                DDRB &= ~(1 << pin);
        break;
        case PORT_C:
            if (direction == OUTPUT)
                DDRC |= 1 << pin;
            else
                DDRC &= ~(1 << pin);
        break;
        case PORT_D:
            if (direction == OUTPUT)
                DDRD |= 1 << pin;
            else
                DDRD &= ~(1 << pin);
        break;
        default:
        break;
    }
}

/**********************************************************************************/

void pinSetValue(uint8_t port, uint8_t pin, uint8_t value)
{
    switch (port)
    {
        case PORT_B:
            if (value == HIGH)
                PORTB |= 1 << pin;
            else
                PORTB &= ~(1 << pin);
        break;
        case PORT_C:
            if (value == HIGH)
                PORTC |= 1 << pin;
            else
                PORTC &= ~(1 << pin);
        break;
        case PORT_D:
            if (value == HIGH)
                PORTD |= 1 << pin;
            else
                PORTD &= ~(1 << pin);
        break;
        default:
        break;
    }
}

/**********************************************************************************/

void pinPulsing(uint8_t port, uint8_t pin, uint32_t period, uint8_t num_of_repetitions)
{
	uint8_t i;
	// Implementacija num_of_repetitions perioda
	for (i = 0; i < num_of_repetitions; i++)
		pinPulse(port, pin, period);
}

/**********************************************************************************/

void pinPulse(uint8_t port, uint8_t pin, uint32_t period)
{
	// Poluperioda u kojoj pin ima visoku vrednost
	pinSetValue (port, pin, HIGH);
	timer0DelayMs(period / 2);
	// Poluperioda u kojoj pin ima nisku vrednost
	pinSetValue(port, pin, LOW);
	timer0DelayMs(period / 2);
}


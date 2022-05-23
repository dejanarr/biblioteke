/*
 * @file pin.h
 * @brief Deklaracija pin biblioteke
 * @author Kosana Pavlovic
 * @date 22-5-2022
 * @version 1.0
 */

#ifndef PIN_H_
#define PIN_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include "timer0.h"

// Makro za podesavanje visoke vrednosti signala na pinu
# define HIGH 1
// Makro za podesavanje niske vrednosti signala na pinu
# define LOW 0
// Makro za podesavanje izlaznog smera pina
# define OUTPUT 1
// Makro za podesavanje ulaznog smera pina
# define INPUT 0
// Makro za selektovanje porta B
# define PORT_B 0
// Makro za selektovanje porta C
# define PORT_C 1
// Makro za selektovanje porta D
# define PORT_D 2

/**
 * pinInit - Funkcija koja implementira inicijalizaciju pina
 * @param port - tip uint8_t - Port ciji se pin inicijalizuje
 * @param pin - tip uint8_t - Pin koji se inicijalizuje
 * @param direction - tip uint8_t - Smer na koji se pin inicijalizuje
 * @return Nema povratnu vrednost.
*/
void pinInit(uint8_t port, uint8_t pin, uint8_t direction);

/**
 * pinSetValue - Funkcija koja implementira postavljanje vrednosti pina
 * @param port - tip uint8_t - Port na ciji se pin postavljla vrednost
 * @param pin - tip uint8_t - Pin na koji se postavljla vrednost
 * @param direction - tip uint8_t - Vrednost koja se postavlja na pin
 * @return Nema povratnu vrednost.
*/
void pinSetValue(uint8_t port, uint8_t pin, uint8_t value);

/**
 * pinPulsing - Funkcija koja implementira odredjen broj treptanja diode
 * @param port - tip uint8_t - Port na kom je pin cija se vrednost postavlja
 * @param pin - tip uint8_t - Pin cija se vrednost postavlja
 * @param period - tip uint32_t - Period treptanja diode
 * @param num_of_repetitions - tip uint8_t - Broj treptanja
 * @return Nema povratnu vrednost
*/
void pinPulsing(uint8_t port, uint8_t pin, uint32_t period, uint8_t num_of_repetitions);

/**
 * pinPulse - Funkcija koja implementira treptanje diode
 * @param port - tip uint8_t - Port na kom je pin cija se vrednost postavlja
 * @param pin - tip uint8_t - Pin cija se vrednost postavlja
 * @param period - tip uint32_t - Period treptanja diode
 * @return Nema povratnu vrednost
*/
void pinPulse(uint8_t port, uint8_t pin, uint32_t period);

#endif /* PIN_H_ */

/*
 * @file timer0.h
 * @brief Deklaracija timer0 biblioteke
 * @author Kosana Pavlovic
 * @date 22-5-2022
 * @version 1.0
 */

#ifndef TIMER0_H_
#define TIMER0_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>

/**
 * timer0Init - Funkcija koja inicijalizuje timer 0 tako da
 * pravi prekide svake milisekunde
 * @return Nema povratnu vrednost
*/
void timer0Init();

/**
 * timer0Millis - Funkcija koja na bezbedan nacin vraca kao povratnu vrednost
 * broj milisekundi proteklih od pocetka merenja vremena
 * @return Vraca broj milisekundi od pocetka merenja vremena
*/
uint32_t timer0Millis();

/** timer0DelayMs - Funkcija koja implementira pauzu u broju
 * milisekundi koji je prosledjen kao parametar
 * @param delay_length - tip uint32_t - Duzina pauze
 * @return Nema povratnu vrednost.
*/
void timer0DelayMs(uint32_t delay_length);

#endif /* TIMER0_H_ */

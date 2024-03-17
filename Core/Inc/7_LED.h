/*
 * 7_LED.h
 *
 *  Created on: Mar 12, 2024
 *      Author: admin
 */

#ifndef INC_7_LED_H_
#define INC_7_LED_H_

void display7SEG(int num);
void update7SEG(int index, int *led_buffer);

void clearLEDS();

void updateLEDMatrix(int index);

#endif /* INC_7_LED_H_ */

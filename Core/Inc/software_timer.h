/*
 * software_timer.h
 *
 *  Created on: Mar 12, 2024
 *      Author: admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag[10];

void timerRun();
int isTimeExpired();
void setTimer(int index, int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */

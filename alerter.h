/*
 * alerter.h
 *
 *  Created on: Jan 24, 2021
 *      Author: PUL1KOR
 */

//#define NULL_PTR  (void*)0
#define NO_OF_ALERTS 2
typedef void (*alerter_funcptr[2])(void);
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
void emailAlerter(void);
void ledAlerter(void);

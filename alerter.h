/*
 * alerter.h
 *
 *  Created on: Jan 24, 2021
 *      Author: PUL1KOR
 */
#define NULL 0
#define NULL_PTR  (void*)0

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
extern void emailAlerter(void);
extern void ledAlerter(void);

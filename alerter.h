/*
 * alerter.h
 *
 *  Created on: Jan 24, 2021
 *      Author: PUL1KOR
 */

#ifndef ALERTER_H_
#define ALERTER_H_

#define NULL 0
#define NULL_PTR  (void*)0

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
extern void emailAlerter(void);
extern void ledAlerter(void);


#endif /* ALERTER_H_ */

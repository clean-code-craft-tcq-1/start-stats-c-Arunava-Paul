/*
 * alerter.c
 *
 *  Created on: Jan 24, 2021
 *      Author: PUL1KOR
 */

#include "stats.h"

extern int emailAlertCallCount;
extern int ledAlertCallCount;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{

	if(	computedStats.max > maxThreshold )
	{
		for( int i = 0 ; i < (sizeof(alerters)/sizeof(alerters[0])) ; i++ )
		{
			if ( alerters[i] != NULL )
			{
				(*alerters[i])();
			}
			else
			{
				/*Function is null_ptr. No jump*/
			}
		}/*end of for loop*/

	}/*end of if(	computedStats.max > maxThreshold )*/
	else
	{
		//Do nothing
	}
}

void emailAlerter(void)
{
	/*email alert specific function*/
	emailAlertCallCount++;
}

void ledAlerter(void)
{
	/*Led alert specific function*/
	ledAlertCallCount++;
}

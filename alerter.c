/*
 * alerter.c
 *
 *  Created on: Jan 24, 2021
 *      Author: PUL1KOR
 */

#include "alerter.h"
#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{

	if(	computedStats.max > maxThreshold )
	{
		for( int i = 0 ; i < NO_OF_ALERTS ; i++ )
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

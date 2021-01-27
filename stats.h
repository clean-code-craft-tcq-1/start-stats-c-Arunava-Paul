#include "alerter.h"

struct Stats
{
	float average;
	float max;
	float min;
};


struct Stats compute_statistics(const float* numberset, int setlength);

extern int emailAlertCallCount;
extern int ledAlertCallCount;

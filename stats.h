#include "alerter.h"

struct Stats
{
	float average;
	float max;
	float min;
};


struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr[2])(void);


extern int emailAlertCallCount;
extern int ledAlertCallCount;

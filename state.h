#ifndef __STATE_H__
#define __STATE_H__

enum State
{
	ST_RESET = -4,
	ST_IDLE = 0,
	ST_TEMP_EXCEEDED = 1,
	ST_START_DEFROSTING = 2,
	ST_DEFROSTING_STARTED = -2,
	ST_HEATING_MIN_TIME = -1,
};

#endif /* #define __STATE_H__ */

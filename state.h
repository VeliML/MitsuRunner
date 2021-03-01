#ifndef __STATE_H__
#define __STATE_H__


enum State
{
	ST_RESET = 0,
	ST_IDLE,
	ST_TEMP_EXCEEDED,
	ST_START_DEFROSTING,
	ST_DEFROSTING_STARTED,
	ST_HEATING_MIN_TIME,
};

#endif /* #define __STATE_H__ */

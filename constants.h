#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

const float TEMPERATURE_DELTA_TO_DEFROST       = 4.0;
const float TEMPERATURE_DELTA_TO_FORCE_DEFROST = 8.0;

const char* TOPIC_STATE = "pub/xxx/xxx/xxx/state";

/* These times are in minutes */
#define TEMPERATURE_DELTA_EXCESS_TIME   5
#define MAX_HEATING_TIME                150
#define MIN_HEATING_TIME                50
#define RELAY_OFF_TIME                  30
#define DEFROST_TIMEOUT                 10

#if MIN_HEATING_TIME < RELAY_OFF_TIME
#error "MIN_HEATING_TIME cannot be smaller than RELAY_OFF_TIME"
#endif

#endif /* #define __CONSTANTS_H__ */

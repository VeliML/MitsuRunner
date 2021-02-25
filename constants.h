#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

const float TEMPERATURE_DELTA_TO_DEFROST       = 4.0;
const float TEMPERATURE_DELTA_TO_FORCE_DEFROST = 8.0;

const char* TOPIC_IS_EXCESS_MIN_TIME_PASSED = "mzl_ln35/lampotilat/sensor/onko_ylityksen_minimiaika_kulunut/state";
const char* TOPIC_IS_HEATING_MIN_TIME_PASSED = "mzl_ln35/lampotilat/sensor/onko_minimiaika_kulunut/state";
const char* TOPIC_DEFROST_HACK_STATE = "mzl_ln35/lampotilat/sensor/sulatushuijaus/state";

#endif /* #define __CONSTANTS_H__ */
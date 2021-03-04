#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

/* Temperature threshold that has to be exceed long enough to start defrosting. */
const float TEMPERATURE_DELTA_TO_DEFROST = 4.0;

/* Temperature threshold that triggers defrosting even though
 * MIN_HEATING_TIME would not be passed. */
/* NOT USED */
/* const float TEMPERATURE_DELTA_TO_FORCE_DEFROST = 10.0; */

/* When temperature delta has been over the threshold 
 * (TEMPERATURE_DELTA_TO_DEFROST) this long, defrosting is started. */
#define TEMPERATURE_DELTA_EXCESS_TIME   5   /* minutes */

/* When this time has been passed since last defrosting, 
 * forced defrosting will be started. */
#define MAX_HEATING_TIME                150 /* minutes */

/* The minumum time between defrosting operations. */
#define MIN_HEATING_TIME                50  /* minutes */

/* The time that the defrost hack relays is off after defrosting is started. */
#define RELAY_OFF_TIME                  30  /* minutes */

/* If defrosting is not started during this time after switching the relay off,
   state will be set back to IDLE inetead of DEFROSTING STARTED */
#define DEFROST_TIMEOUT                 10  /* minutes */

/* Delay at the reset before allowing state machine to step to next states 
 * Gives time for the sensors to be reads*/
#define RESET_SENSOR_DELAY				25 /* seconds */
 
/* Delay at the device bootup before starting the state machine to give 
 * time for the sensors to be read, system to connect to wifi and system to connect to MQTT broker */
#define INITIALIZE_DELAY                60  /* seconds*/



/* Sanity checks */
#if MIN_HEATING_TIME < RELAY_OFF_TIME
#error "MIN_HEATING_TIME cannot be smaller than RELAY_OFF_TIME"
#endif

#endif /* #define __CONSTANTS_H__ */

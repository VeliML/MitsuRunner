/*
# Copyright (c) 2021 Veli Matti Lastumäki (Velsku at lampopumput.info),
#                    Joonas Ihonen (puu at lampopumput.info)
#
# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
# IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
# CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
# TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
# SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

/* Temperature threshold that has to be exceed long enough to start defrosting. */
const float TEMPERATURE_DELTA_TO_DEFROST = 5.0;

/* Outdoor temperature thresholds to switch on/off defrost hacking */
const float OUTDOOR_TEMPERATURE_TO_ENTER_OFF_STATE = 3.0;
const float OUTDOOR_TEMPERATURE_TO_EXIT_OFF_STATE = 2.0;

/* Maximum heat exchanger temperature value to have defrost hacking on 
 * This is checked on Reset, Idle and Off states only, not during defrosting */
const float HEAT_EXCHANGER_MAX_TEMPERATURE = 50.0;

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
#define RESET_SENSOR_DELAY				25  /* seconds */
 
/* Delay at the device bootup before starting the state machine to give 
 * time for the sensors to be read, system to connect to wifi and system to connect to MQTT broker */
#define INITIALIZE_DELAY                60  /* seconds*/


/* Sanity checks */
#if MIN_HEATING_TIME < RELAY_OFF_TIME
#error "MIN_HEATING_TIME < RELAY_OFF_TIME"
#endif

#if MAX_HEATING_TIME < MIN_HEATING_TIME
#error "MAX_HEATING_TIME < MIN_HEATING_TIME"
#endif

#endif /* #define __CONSTANTS_H__ */

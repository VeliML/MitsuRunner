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

#ifndef __STATE_H__
#define __STATE_H__

enum State
{
	ST_RESET = -4,
	ST_OFF = -3,
	ST_DEFROSTING_STARTED = -2,
	ST_HEATING_MIN_TIME = -1,
	ST_IDLE = 0,
	ST_TEMP_EXCEEDED = 1,
	ST_START_DEFROSTING = 2,
};

enum Timer_Status
{
	TMR_NOT_PASSED = 0,
	TMR_RUNNING = 1,
	TMR_PASSED = 2,
};

#endif /* #define __STATE_H__ */

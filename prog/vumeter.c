/*
 *  ArduinoMeter reads an analog input and outputs it digitaly
 *  Copyright (C) 2015  Gustaf Järgren
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "vumeter.h"
#include <Arduino.h>
#include "searduino.h"
#include "main.h"

void loopVuMeter() {
	unsigned char in = analogRead(ANALOG_IN);
	int i;
	char leds = (in / 32) + 1;

	for (i = DIGITAL_OUT_BEGIN; i <= DIGITAL_OUT_BEGIN + 7; ++i)
	{
		if (i - DIGITAL_OUT_BEGIN < leds) {
			digitalWrite(i, HIGH);
		} else {
			digitalWrite(i, LOW);
		}
	}
}
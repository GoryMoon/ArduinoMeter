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

#include <Arduino.h>
#include "searduino.h"
#include "vumeter.h"
#include "main.h"

int mode = 0;
int button = 0;
int oldButton = 0;

void setup(void) {
	int i;

	pinMode(DIGITAL_IN, INPUT);
	for (i = DIGITAL_OUT_BEGIN; i <= DIGITAL_OUT_BEGIN + 7; ++i)
	{
	pinMode(i, OUTPUT);
	}
}

void loop(void) {
	oldButton = button;
	button = digitalRead(DIGITAL_IN);

	if (button == 1 && oldButton != button) {
		mode = ((mode == 0) ? 1: 0);
	}

	if (mode == 0) {
		loopVuMeter();
	} else {
		loopBinDisplay();
	}
}

int main(void)
{

	init();
	setup();

	SEARDUINO_LOOP()
	{
		loop();
	}
}
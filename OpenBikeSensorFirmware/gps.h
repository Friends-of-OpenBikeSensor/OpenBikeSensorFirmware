/*
  Copyright (C) 2019 Zweirat
  Contact: https://openbikesensor.org

  This file is part of the OpenBikeSensor project.

  The OpenBikeSensor sensor firmware is free software: you can redistribute
  it and/or modify it under the terms of the GNU General Public License as
  published by the Free Software Foundation, either version 3 of the License,
  or (at your option) any later version.

  The OpenBikeSensor sensor firmware is distributed in the hope that it will
  be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
  Public License for more details.

  You should have received a copy of the GNU General Public License along with
  the OpenBikeSensor sensor firmware.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OBS_GPS_H
#define OBS_GPS_H

#include <Arduino.h>
#include <TinyGPS++.h> // http://arduiniana.org/libraries/tinygpsplus/
#include <HardwareSerial.h>

#include "config.h"
#include "globals.h"

extern TinyGPSPlus gps;
extern HardwareSerial SerialGPS;

time_t currentTime();

void readGPSData();

bool isInsidePrivacyArea(TinyGPSLocation location);

void addNewPrivacyArea(double latitude, double longitude, int radius);

double haversine(double lat1, double lon1, double lat2, double lon2);

#endif

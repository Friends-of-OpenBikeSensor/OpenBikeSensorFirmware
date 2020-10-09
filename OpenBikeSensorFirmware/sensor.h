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

#ifndef OBS_SENSOR_H
#define OBS_SENSOR_H

#include <Arduino.h>

#include "globals.h"
#include "vector.h"

struct HCSR04SensorInfo
{
  int triggerPin = 15;
  int echoPin = 4;
  int timeout = 15000;
  uint8_t offset = 0;
  uint8_t distance = 0;
  uint32_t duration;
  char* sensorLocation;
  uint8_t minDistance=MAX_SENSOR_VALUE;
  unsigned long lastMinUpdate=0;
};

class HCSR04SensorManager
{
  public:
    HCSR04SensorManager() {}
    virtual ~HCSR04SensorManager() {}
    Vector<HCSR04SensorInfo> m_sensors;
    Vector<uint8_t> sensorValues;
    void getDistances();
    void reset(bool resetMinDistance);
    void registerSensor(HCSR04SensorInfo);
    void setOffsets(Vector<uint8_t>);
    void setTimeouts();

  protected:

  private:
    void getDistance(int idx);
    void getDistanceSimple(int idx);
};

/*
class Sensor
{
  public:
    Sensor() {}
    virtual ~Sensor() {}
    virtual void init() = 0;

  protected:

  private:
};

class DistanceSensor : public Sensor
{
  public:
    DistanceSensor() : Sensor() {
    }
    ~DistanceSensor() {}
    virtual void init()
    {

    }
    void getMinDistance(uint8_t& min_distance);
    virtual float getDistance() = 0;
    void setOffset(uint8_t offset) {
      m_offset = offset;
    }
  protected:
    uint8_t m_offset = 0;
  private:
    unsigned long m_measureInterval = 1000;

};

class HCSR04DistanceSensor : public DistanceSensor
{
  public:
    HCSR04DistanceSensor() : DistanceSensor() {
      init();
    }
    HCSR04DistanceSensor(int echoPin, int triggerPin) {
      m_echoPin = echoPin;
      m_triggerPin = triggerPin;
      init();
    }
    ~HCSR04DistanceSensor() {}
    void init() {
      pinMode(m_triggerPin, OUTPUT);
      pinMode(m_echoPin, INPUT);
      digitalWrite(m_triggerPin, HIGH);
    }
    float getDistance();
    void setOffset(uint8_t offset) {
      m_offset = offset;
      m_timeout = 15000 + (int)(m_offset * 29.1 * 2);
    }
  protected:
  private:
    int m_triggerPin = 15;
    int m_echoPin = 4;
    int m_timeout = 15000;
};*/

#endif

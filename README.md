# OpenBikeSensor

[![OpenBikeSensor - CI](https://github.com/Friends-of-OpenBikeSensor/OpenBikeSensorFirmware/workflows/OpenBikeSensor%20-%20CI/badge.svg)](https://github.com/Friends-of-OpenBikeSensor/OpenBikeSensorFirmware/actions?query=workflow%3A%22OpenBikeSensor+-+CI%22) [![GitHub version](https://badge.fury.io/gh/Friends-of-openbikesensor%2FOpenBikeSensorFirmware.svg)](https://badge.fury.io/gh/Friends-of-openbikesensor%2FOpenBikeSensorFirmware)

Platform for measuring data on a bicyle and collecting it.
Currently we measure the distance with either HC-SR04 or JSN-SR04T ultrasonic sensors connected to an ESP32.

## Description

Inspired by the Berlin project Radmesser. This version uses a simple push button at the handle bar to confirm distance-measures were actually overtaking vehicles. It has its own GPS and a SD card for logging, so it does not require any additional hardware (like a smartphone).

With version v0.3 on the firmware also exposes the measured data via buetooth.
You can use this to feed data to [SimRa](https://www.mcc.tu-berlin.de/menue/forschung/projekte/simra/) App.

## Updating

Because the version v0.3 and up uses a different partitioning schema for the
ESP32, this update cannot be done over the air. THis needs a onetime update 
via USB cable connection. Once this was done you can OTA update again with
all versions (even back to v0.2.x).   


## Find the documentation

You can find the OpenBikeSensor documentation under:

* https://Friends-of-OpenBikeSensor.github.io

## Getting Started

1. You need a OpenBikeSensor in order to try work on the Firmware. [Head over to our Hardware Guide to assemble one](https://friends-of-openbikesensor.github.io/hardware/hardware.html) (attention, under construction!).
2. Clone this repo: `git clone https://github.com/Friends-of-OpenBikeSensor/OpenBikeSensorFirmware.git` and `cd` into it.
3. Choose between developing with recommended [VSCode](https://friends-of-openbikesensor.github.io/software/firmware/setup.html#vscode) (easiest setup) or [CLion](https://friends-of-openbikesensor.github.io/software/firmware/setup.html#clion) (license required), respectively [Arduino IDE](https://friends-of-openbikesensor.github.io/software/firmware/setup.html#arduino-ide) (discouraged).
4. Happy Coding! 🎉


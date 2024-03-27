#include "pins.h"
#include <Arduino.h>

static void config_system_led()
{
    pinMode(SYSTEM_LED, OUTPUT);
    digitalWrite(SYSTEM_LED, HIGH);
}

static void config_ultrasound_sensor_pins()
{
    pinMode(ULTRASOUND_ECHO, INPUT);
    pinMode(ULTRASOUND_TRIG, OUTPUT);
}

void setup_pins()
{
    config_system_led();
    config_ultrasound_sensor_pins();
}
#include "pins.h"
#include <Arduino.h>

static void config_system_led()
{
    pinMode(SYSTEM_LED, OUTPUT);
    digitalWrite(SYSTEM_LED, HIGH);
}

void setup_pins()
{
    config_system_led();
}
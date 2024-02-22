#include "pins.h"
#include <Arduino.h>

int displayPins[] = {
    PIN_D0,
    PIN_D1,
    PIN_D2,
    PIN_D3,
    PIN_D5,
    PIN_D6,
    PIN_D7,
    PIN_D8,
    PIN_RX
};

void config_system_led()
{
    pinMode(SYSTEM_LED, OUTPUT);
    digitalWrite(SYSTEM_LED, HIGH);
}

void setup_pins()
{
    config_system_led();
}
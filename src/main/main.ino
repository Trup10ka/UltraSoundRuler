#include "pins.h"

void setup() 
{
    setup_pins();
}

void loop() 
{
    digitalWrite(SYSTEM_LED, LOW);
    delay(1000);
    digitalWrite(SYSTEM_LED, HIGH);
    delay(4000);
}
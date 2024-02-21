#include "util/pins.h"

void setup() 
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000); 
    igitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
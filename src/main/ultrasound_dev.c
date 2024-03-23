#include <limits.h>
#include "pins.h"
#include "ultrasound_dev.h"
#include <Arduino.h>

void trigger_measure()
{
    digitalWrite(ULTRASOUND_TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(ULTRASOUND_TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(ULTRASOUND_TRIG, LOW);
}

float parse_distance(ParseType parseType)
{
    long duration = pulseIn(ULTRASOUND_ECHO, HIGH, 5000);
    
    float parsedDistance = duration * parseType.parseValue / 2;
    
    return parsedDistance;
}
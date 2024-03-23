#include "pins.h"
#include "ultrasound_dev.h"
#include <LiquidCrystal_I2C.h>

ParseType speedOfLightInCm = { "CM", SPEED_OF_SOUND_IN_CM };
ParseType speedOfLightInInch = { "INCH", SPEED_OF_SOUND_IN_INCH };

void setup() 
{
    Serial.begin(9600);
    setup_pins();
}
void loop() 
{
    trigger_measure();
    float distance = parse_distance(speedOfLightInInch);

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(speedOfLightInInch.name);

    delay(1500);
}
#include "pins.h"
#include "ultrasound_dev.h"
#include "lcd.hpp"

ParseType speedOfLightInCm = { " CM", SPEED_OF_SOUND_IN_CM };
ParseType speedOfLightInInch = { " INCH", SPEED_OF_SOUND_IN_INCH };

void setup() 
{
    setup_pins();
    init_lcd();
}
void loop() 
{
    trigger_measure();
    float distance = parse_distance(speedOfLightInInch);

    print_distance(distance, speedOfLightInInch.name);

    delay(500);
}
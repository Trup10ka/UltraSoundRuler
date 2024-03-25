#ifndef ULTRASOUND_SENSOR_H

/* This condition is needed for the compiler to know that any source code that includes this header, is a C code, thus adjusting the compilation process */
#ifdef __cplusplus
extern "C" {
#endif

#include "type.h"

#define SPEED_OF_SOUND_IN_CM 0.034
#define SPEED_OF_SOUND_IN_INCH 0.0134

void trigger_measure();

float parse_distance(ParseType parseType);

#ifdef __cplusplus
}
#endif

#endif
#ifndef PINS_H

/* This condition is needed for the compiler to know that any source code that includes this header, is a C code, thus adjusting the compilation process */
#ifdef __cplusplus
extern "C" {
#endif

#define PINS_H

/* These pins pair are specific for ESP 8266 */
#define PIN_D0 16
#define PIN_D1 5
#define PIN_D2 4
#define PIN_D3 0
#define PIN_D5 14
#define PIN_D6 12
#define PIN_D7 13 
#define PIN_D8 15
#define PIN_RX 3
#define PIN_TX 1
#define SYSTEM_LED 2

void setup_pins();

/* These defines are for YOU to be customised. You may have different circuit wiring and program operates with these macros, for easier adjustments */
#define ULTRASOUND_TRIG PIN_D1
#define ULTRASOUND_ECHO PIN_D0

#ifdef __cplusplus
}
#endif

#endif
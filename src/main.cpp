//#include <Arduino.h>
#include "LEDblink.hpp"

#if defined(ESP32)
// for ESP32 devkit v4
#define LED_BUILTIN 2
#endif

LEDblink led_test;

void setup() {
    led_test.init(LED_BUILTIN);
    Serial.begin(115200);
}
 
void loop() {
    led_test.led_on();
    Serial.println("LED On!!"); 
    delay(1000); 
    led_test.led_off();
    Serial.println("LED Off!!");
    delay(1000); 
}
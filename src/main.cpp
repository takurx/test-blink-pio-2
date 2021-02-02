#include <Arduino.h>

#if defined(ESP32)
// for ESP32 devkit v4
#define LED_BUILTIN 2
#endif

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    //Serial.begin(9600);
    //Serial.begin(57600);
    Serial.begin(115200);
}
 
void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("LED On!!"); 
    delay(1000); 
    digitalWrite(LED_BUILTIN, LOW); 
    Serial.println("LED Off!!");
    delay(1000); 
}
#include <Arduino.h>

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    //Serial.begin(9600);
    Serial.begin(57600);
}
 
void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("LED On!!"); 
    delay(100); 
    digitalWrite(LED_BUILTIN, LOW); 
    Serial.println("LED Off!!");
    delay(100); 
}
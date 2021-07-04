#include "LEDblink.hpp"

void LEDblink::init(int pin)
{
    _pin = pin;
    pinMode(pin, OUTPUT);
    led_off();
}

void LEDblink::led_on()
{
    digitalWrite(_pin, HIGH);
}

void LEDblink::led_off()
{
    digitalWrite(_pin, LOW);
}

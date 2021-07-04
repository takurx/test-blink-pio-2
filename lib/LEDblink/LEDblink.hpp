#ifndef LEDblink_HPP
#define LEDblink_HPP

#include <Arduino.h>

class LEDblink
{
    public:
        void init(int pin);
        void led_on();
        void led_off();
    private:
        int _pin;
};

#endif

/*
  Motor.h - TB6612FNG H-Bridge
  Created by Gary Hill, August 13, 2016.
*/
#ifndef Motor_h          // The #define Guard
#define Motor_h

#include "Arduino.h"     // Arduino library files

/*
 *  header .h class member definitions
 */

class Motor
{
public:
    // Constructor
    Motor();

    // Public class 'methods'
    // could maybe overload begin() instead..?
    #if defined(ARDUINO_AVR_3DOT)
    void begin(uint8_t, uint8_t, uint8_t);
    #else
    void begin(uint8_t, uint8_t);
    #endif
    void brake();
    void go(uint8_t, uint8_t);

private:

    // Private class 'methods'

    // Private class 'properties'
    int _pin1, _pin2, _pinPWM;

}; // end of class definition

#endif

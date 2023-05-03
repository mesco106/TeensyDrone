/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#include <PWMServo.h>

#define Brushless1 2
#define Brushless2 3
#define Brushless3 4
#define Brushless4 5

PWMServo ESC1;
PWMServo ESC2;
PWMServo ESC3;
PWMServo ESC4;

void setup()
{
  ESC1.attach(Brushless1,1000,2000);
  ESC2.attach(Brushless2,1000,2000);
  ESC3.attach(Brushless3,1000,2000);
  ESC4.attach(Brushless4,1000,2000);
}

void loop()
{
  ESC1.write(0);
  ESC2.write(0);
  ESC3.write(0);
  ESC4.write(0);
}

#ifndef initialization_h
#define initialization_h

#include <PWMServo.h>

class Initialization{
  public:
    Initialization(int motor1, int motor2, int motor3, int motor4, int ESClowerLimit, int ESCupperLimit);
    void test(int speed);

  private:
    PWMServo ESC1, ESC2, ESC3, ESC4;
    int m_motor1;
    int m_motor2;
    int m_motor3;
    int m_motor4;
    int m_ESClowerLimit;
    int m_ESCupperLimit;
    int m_speed;
};

extern Initialization initialization;

#endif
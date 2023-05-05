#include "Arduino.h"
#include "initialization.h"
#include <PWMServo.h>
#include <Adafruit_BNO055.h>

Initialization::Initialization(int motor1, int motor2, int motor3, int motor4, int ESClowerLimit, int ESCupperLimit){
    Serial.begin(9600);
    
    m_motor1 = motor1;
    m_motor2 = motor2;
    m_motor3 = motor3;
    m_motor4 = motor4;
    m_ESClowerLimit = ESClowerLimit;
    m_ESCupperLimit = ESCupperLimit;

    ESC1.attach(m_motor1, m_ESClowerLimit, m_ESCupperLimit);
    ESC2.attach(m_motor2, m_ESClowerLimit, m_ESCupperLimit);
    ESC3.attach(m_motor3, m_ESClowerLimit, m_ESCupperLimit);
    ESC4.attach(m_motor4, m_ESClowerLimit, m_ESCupperLimit);
    }

void Initialization::test(int speed){
    int m_speed = speed;

    ESC1.write(m_speed);
    ESC2.write(m_speed);
    ESC3.write(m_speed);
    ESC4.write(m_speed);
}


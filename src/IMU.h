#ifndef IMU_h
#define IMU_h

#include <Adafruit_BNO055.h>

class SetupIMU{
    public:
        SetupIMU();
        void imuDataAcquisition();

    private:
        void printEvent(sensors_event_t* event);
        
        //Set the delay between fresh samples 
        uint16_t BNO055_SAMPLERATE_DELAY_MS = 100;

        // Check I2C device address and correct line below (by default address is 0x29 or 0x28) id, address                               
        Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28, &Wire);
};

#endif
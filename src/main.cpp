#include "Arduino.h"
#include "initialization.h"
#include "IMU.h"
#include "barometer.h"

void setup() {
  Initialization TeensyDrone(2,3,4,5,1000,2000);
  SetupIMU IMUsensor;
  SetupBaro BaroSensor;

  while(1){
    TeensyDrone.test(0);
    IMUsensor.imuDataAcquisition();
    BaroSensor.getBaroData();
  }    
}

void loop() {}
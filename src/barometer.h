#ifndef barometer_h
#define barometer_h

#include <Adafruit_BMP085.h>

class SetupBaro{
    public:
        SetupBaro();
        void getBaroData();

    private:
        Adafruit_BMP085 bmp;
};

#endif
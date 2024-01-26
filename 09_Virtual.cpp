//09_Virtual.cpp:
//================
#include <iostream>

using namespace std;
/***********************
 * Defining GPS service
 ***********************/
class GPSDeviceInterface {
    public:
        virtual int readGPS() = 0;
        virtual double GetLatitude() = 0;
        virtual double GetLongitude() = 0;
};


class GPS_QTL89 : public GPSDeviceInterface {
 private:
    double latitude;
    double longitude;
 public:
    GPS_QTL89() {Initialize();};
    ~GPS_QTL89() {DeInitialize();};
    void Initialize();
    void DeInitialize();
    /*virtual functions from device frame work*/
    virtual int readGPS();
    virtual double GetLatitude() {return latitude;};
    virtual double GetLongitude() {return longitude;};
};

void GPS_QTL89::Initialize() {
    cout <<__func__<< " called" <<endl;
}

void GPS_QTL89::DeInitialize() {
    cout <<__func__<< " called" <<endl;
}

class GPSDevice{
 public:
    class DeviceThread {
        public:
            void publish();
        
    };
    static GPSDeviceInterface *dev;//
    //void publish();
    //static GPSDeviceInterface *dev;
};	

int GPS_QTL89::readGPS()
{
    latitude = 12.964;
    longitude = 79.974;
    return 0;
}


void GPSDevice::DeviceThread::publish() {
    cout << "latitude:"<<GPSDevice::dev->GetLatitude()<<endl;
    cout << "longitude:"<<GPSDevice::dev->GetLongitude()<<endl;
}

GPSDeviceInterface* GPSDevice::dev;
int main()
{
    int i=0;
    GPSDevice::dev = new GPS_QTL89();
    GPSDevice::DeviceThread *devthread;
    while(i!=10)
    {
    GPSDevice::dev->readGPS();
    devthread->publish();
    i++;
    }
    return 0;
}

/*
op:
====
Initialize called
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974
latitude:12.964
longitude:79.974

*/
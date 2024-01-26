08_Virtual.cpp:
============
#include <iostream>

using namespace std;
/***********************
 * Defining GPS service
 ***********************/
class GPInterface {
    public:
        virtual int ReadGPS() = 0;
        virtual double GetLatitude() = 0;
        virtual double GetLongitude() = 0;
};


class GPS890 : public GPInterface {
 private:
    double latitude;
    double longitude;
 public:
    GPS890() {Initialize();};
    ~GPS890() {DeInitialize();};
    void Initialize();
    void DeInitialize();
    /*virtual functions from device frame work*/
    virtual int ReadGPS();
    virtual double GetLatitude() {return latitude;};
    virtual double GetLongitude() {return longitude;};
};

void GPS890::Initialize() {
    cout <<__func__<< " called" <<endl;
}

void GPS890::DeInitialize() {
    cout <<__func__<< " called" <<endl;
}

class GPSDevice{
 public:
    static GPInterface *dev;
};	

int GPS890::ReadGPS()
{
    latitude = 12.964;
    longitude = 79.974;
    return 0;
}


GPInterface* GPSDevice::dev;
int main()
{
    //GPSDevice gpsdevice;
    GPSDevice::dev = new GPS890();
    GPSDevice::dev->ReadGPS();
    cout << "longitude:" << GPSDevice::dev->GetLongitude()<<endl;
    cout << "latitude:" << GPSDevice::dev->GetLatitude()<<endl;
    
    return 0;
}

//op:
//===
//Initialize called
//latitude:12.964
//latitude:79.974
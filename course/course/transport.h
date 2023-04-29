#pragma once

#include <string>

enum transport_type { unknown, ground, air };

class transport
{
private:
    transport_type transportType;
    unsigned int speed;
    float driveTime;
    unsigned int distanceToGo;
public:
    transport() :transport("Transport", unknown) {}
    transport(std::string name, transport_type tr)
    {
        this->transportName = name;
        this->transportType = tr;
    }

    float GetDriveTime(); // возвращает время за которое проезжается дистанция
    void setDistance(unsigned int distance);

protected:
    std::string transportName;
    virtual float calcDriveTime();
    unsigned int GetSpeed();
    void SetSpeed(unsigned int speed);
    unsigned int GetDistance();

};

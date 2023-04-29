
#include "transport.h"

float transport::GetDriveTime()
{
	driveTime = calcDriveTime();
	return driveTime;
}

void transport::setDistance(unsigned int distance)
{
	this->distanceToGo = distance;
}


float transport::calcDriveTime()
{
	return driveTime;
}

unsigned int transport::GetSpeed()
{
	return speed;
}

void transport::SetSpeed(unsigned int speed)
{
	this->speed = speed;
}

unsigned int transport::GetDistance()
{
	return distanceToGo;
}

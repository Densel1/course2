
#pragma once
#include <exception>
#include "verblud.h"

class kentavr: public verblud
{
protected:
  float calcDriveTime() override;
public:
  kentavr(std::string name, unsigned int speed, unsigned int dist,
          unsigned char TTGBR, unsigned char SORT)
  {
     	this->transportName = name;
		this->SetSpeed(speed);
		this->setDistance(dist);
		this->SetTimeToGoBeforeRest(TTGBR);
		this->SetFirstRestTime(SORT);
  }
};
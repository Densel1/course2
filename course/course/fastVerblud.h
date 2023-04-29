
#pragma once

#include "verblud.h"

class fastVerblud:public verblud
{
  unsigned char other_rest_time;
  
  
protected:
  float calcDriveTime() override;
  
  void SetOtherRestTime(unsigned int t)
  {
    this->other_rest_time = t;
  }
  
  unsigned int GetOtherRestTime()
  {
    return this->other_rest_time;
  }
  
public:
//	fastVerblud() :fastVerblud("Бысстрый верблюд") {};
	fastVerblud(std::string name)
	{
		this->transportName = name;
		this->SetSpeed(40);
		this->setDistance(0);
		this->SetTimeToGoBeforeRest(10);
		this->SetFirstRestTime(5);
		this->SetSecondRestTime(6.5);
		this->SetOtherRestTime(8);
	};
  
  fastVerblud(std::string name, unsigned int speed, unsigned int dist,
             unsigned char TTGBR, unsigned char SFRT, float SSRT,
			 unsigned int SORT)
  {
     	this->transportName = name;
		this->SetSpeed(speed);
		this->setDistance(dist);
		this->SetTimeToGoBeforeRest(TTGBR);
		this->SetFirstRestTime(SFRT);
		this->SetSecondRestTime(SSRT);
		this->SetOtherRestTime(SORT);
  }
};


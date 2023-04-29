#pragma once
#include <string>
#include <exception>
#include "groundtransport.h"

class verblud :public groundtransport
{
  unsigned char time_to_go_before_rest = 30;
  unsigned char first_rest_time = 5;
  float second_rest_time = 8;
protected:
  float calcDriveTime() override;
  void SetTimeToGoBeforeRest(unsigned char t)
  {
    this->time_to_go_before_rest = t;
  }
  unsigned char GetTimeToGoBeforeRest()
  {
    return this->time_to_go_before_rest;
  }
  void SetFirstRestTime(unsigned char t)
  {
    this->first_rest_time = t;
  }
  unsigned char GetFirstRestTime()
  {
    return this->first_rest_time;
  }
  void SetSecondRestTime(float t)
  {
    this->second_rest_time = t;
  }
  float GetSecondRestTime()
  {
    return this->second_rest_time;
  }
public:
	verblud():verblud("Верблюд") {}
	verblud(std::string name)
	{
		this->transportName = name;
		this->SetSpeed(10);
		this->setDistance(0);
		this->SetTimeToGoBeforeRest(30);
		this->SetFirstRestTime(5);
		this->SetSecondRestTime(8);
	};

    verblud(std::string name, unsigned int speed, unsigned int dist,
             unsigned char TTGBR, unsigned char SFRT, unsigned char SSRT)
    {
     	this->transportName = name;
		this->SetSpeed(speed);
		this->setDistance(dist);
		this->SetTimeToGoBeforeRest(TTGBR);
		this->SetFirstRestTime(SFRT);
		this->SetSecondRestTime(SSRT);
    }
};

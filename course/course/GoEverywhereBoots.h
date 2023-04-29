
#pragma once

#include "verblude.h"

class GoEverywhereBoots: public verblud
{
public:
//  GoEverywhereBoots():GoEverywhereBoots("Ботинки-вездеходы")
  GoEverywhereBoots(std::string name, unsigned int speed, unsigned int dist,
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

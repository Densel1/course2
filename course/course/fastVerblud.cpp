
#include "fastVerblud.h"

float fastVerblud::calcDriveTime()
{
  float clock = 0;
  unsigned int way = 0;
  int i = 0;
  for (clock; way < GetDistance(); clock += GetTimeToGoBeforeRest(), ++i)
  {
		// S = S0 + V*t
		way += GetSpeed() * GetTimeToGoBeforeRest();

		clock+=i==1?GetFirstRestTime() :
			   i==2?GetSecondRestTime() :
			   i>3?GetOtherRestTime() : 0;
  }
	// условие вычитающее перебег
  if (GetSpeed() == 0);// throw std::domain_error("Division by zero error!");
  clock -= (way - GetDistance())/ GetSpeed();
  return clock;
}
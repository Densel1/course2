
#include "verblud.h"


float verblud::calcDriveTime()
{
  float clock = 0;
  unsigned int way = 0;
  float i = 0;
  for (clock; way < GetDistance(); clock += GetTimeToGoBeforeRest(), ++i)
  {
		// ���� = ����0 + ��������*�����
		way += GetSpeed() * GetTimeToGoBeforeRest();

		clock+=i==1?first_rest_time:
			   i>1?second_rest_time:0;
  }
	// ������� ���������� �������
 // if (GetSpeed() == 0);// throw std::domain_error("Division by zero error!")
  clock -= (way - GetDistance())/ GetSpeed();
  return clock;
}
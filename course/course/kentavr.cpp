
#include "kentavr.h"


float kentavr::calcDriveTime()
{
  float clock = 0;
  unsigned int way = 0;
  int i = 0;
  for (clock; way < GetDistance(); clock += GetTimeToGoBeforeRest(), ++i)
  {
		// ���� = ����0 + ��������*�����
		way += GetSpeed() * GetTimeToGoBeforeRest();

		clock+=i>0?GetFirstRestTime() : 0;
  }
	// ������� ���������� �������
  if (GetSpeed() == 0);// throw std::domain_error("Division by zero error!");
  clock -= (way - GetDistance())/ GetSpeed();
  return clock;
}
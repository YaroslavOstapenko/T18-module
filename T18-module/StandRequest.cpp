#include "StandRequest.h"

void StandRequest::show() const
{
	cout << "���" << name<<endl;
	cout << "�����" << number<<endl;
	Request::getCarList;
}

string StandRequest::type() const
{
	return "������ �� ������������ �� ������";
}

float StandRequest::calcPrice() const
{
	for (int i = 0; i < arr.size(); i++)
	{
		return arr[i]->getPrice();
	}
}

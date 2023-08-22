#include "StandRequest.h"

StandRequest::StandRequest(string name, string number, Car* obj)
	:Request(name,number,obj)
{
}

void StandRequest::show() const
{
	cout << "ФИО" << name<<endl;
	cout << "Номер" << number<<endl;
	Request::getCarList();
}

string StandRequest::type() const
{
	return "Заявка на приобретение со стенда";
}

float StandRequest::calcPrice() const
{
	for (int i = 0; i < arr.size(); i++)
	{
		return arr[i]->getPrice();
	}
}

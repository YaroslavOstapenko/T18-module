#pragma once
#include <string>
#include <vector>
#include "Car.h"
using namespace std;

class Request
{
protected:
	string name;
	string number;
	vector<Car> arr;
public:
	Request();
	Request(string name,string number,Car obj);

	string getName()const;
	void setName(string name);

	string getNumber()const;
	void setNumber(string number);

	vector<Car> getCarList();
	void addCar(Car obj);
	void delCar(int index);

	virtual void show() const;
	virtual string type()const;
	virtual float calcPrice() const = 0;
};


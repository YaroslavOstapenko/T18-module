#pragma once
#include "Request.h"
class StandRequest :public Request
{
public:
	StandRequest(string name, string number, Car* obj);
	virtual void show() const override;
	virtual string type()const override;
	virtual float calcPrice() const override;
};


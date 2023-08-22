#pragma once
#include "Request.h"
class StandRequest :public Request
{
public:
	virtual void show() const = 0;
	virtual string type()const = 0;
	virtual float calcPrice() const = 0;
};


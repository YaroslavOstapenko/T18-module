#pragma once
#include "Request.h"
class StandRequest :public Request
{
public:
	virtual void show() const override;
	virtual string type()const override;
	virtual float calcPrice() const override;
};


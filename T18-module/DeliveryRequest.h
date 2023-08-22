#pragma once
#include "Request.h"
class DeliveryRequest : public Request
{
protected:
	float percent;
public:
	DeliveryRequest();
	DeliveryRequest(string name, string number, Car* obj,float percent);

	virtual void show() const override;
	virtual string type()const override;
	virtual float calcPrice() const override;
};


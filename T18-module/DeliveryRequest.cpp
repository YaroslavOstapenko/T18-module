#include "DeliveryRequest.h"

DeliveryRequest::DeliveryRequest()
{
    percent = 3;
}

DeliveryRequest::DeliveryRequest(string name, string number, Car* obj, float percent)
    :Request(name, number, obj),percent(percent)
{
}

void DeliveryRequest::show() const
{
    cout << "ФИО" << name << endl;
    cout << "Номер" << number << endl;
    cout << "Процент" << percent << endl;
    Request::getCarList();
}

string DeliveryRequest::type() const
{
    return "Заявка на отложенную поставку";
}

float DeliveryRequest::calcPrice() const
{
    float price;
    for (int i = 0; i < arr.size(); i++)
    {
        price = arr[i]->getPrice();
        price - price * (percent / 100);
    }
    return price;
}

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
    cout << "���" << name << endl;
    cout << "�����" << number << endl;
    cout << "�������" << percent << endl;
    Request::getCarList();
}

string DeliveryRequest::type() const
{
    return "������ �� ���������� ��������";
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

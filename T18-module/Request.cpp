#include "Request.h"

Request::Request()
{
    name = "";
    number = "";
}

Request::Request(string name, string number, Car* obj)
    :name(name),number(number)
{
    arr.push_back(obj);
}

string Request::getName() const
{
    return name;
}

void Request::setName(string name)
{
    if (name.length()>5)
    {
        this->name = name;
    }
}

string Request::getNumber() const
{
    return number;
}

void Request::setNumber(string number)
{
    if (number.length()>0)
    {
        this->number = number;
    }
}

void Request::getCarList()
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i].isAviable())
        {
            arr[i].show();
        }
    }
    
}

void Request::addCar(Car* obj)
{
    arr.push_back(obj);
}

void Request::delCar()
{
    string model;
    cout << "Ведите бренд машины: ";
    getline(cin,model);

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].getModel() == model)
        {
            delete arr[i];
            arr.erase(arr.begin() + i);
        }
    }
}


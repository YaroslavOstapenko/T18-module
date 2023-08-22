#pragma once
#ifndef T18_MODULE_STORE_H
#define T18_MODULE_STORE_H

#include <iostream>
#include <string>
#include "Car.h"
#include "Request.h"
#include <vector>
#include <algorithm>

using namespace std;

class CarShop
{
protected:
    string name;
    vector<Car*> cars;
    vector<Request*> requests;
public:
    CarShop();
    CarShop(string name);
    ~CarShop();
    void setName(string name);
    void addCar(Car* obj);
    void dellCar();
    int find()const;
    void editCar();

    void makeRequests(Request* obj);
    void delRequests();
    int findRequests()const;
    void editRequests();


};

#endif //T18_MODULE_STORE_H
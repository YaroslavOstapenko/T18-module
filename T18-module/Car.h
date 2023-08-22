#pragma once

#include <iostream>
#include <string>

using namespace std;

class Car
{
protected:
    string model;
    int pass_quantity;
    float price;
    int rest;
    bool isAviable;
public:
    Car();
    Car(string model, int pass_quantity, float price, int rest, bool isAviable);
    ~Car();

    const string &getModel() const;

    void setModel(const string &model);

    int getPassQuantity() const;

    void setPassQuantity(int passQuantity);

    float getPrice() const;

    void setPrice(float price);

    int getRest() const;

    void setRest(int rest);

    bool isAviable1() const;

    void setIsAviable(bool isAviable);

    void show()const;



};


#include "Car.h"

Car::Car() {
        model="не установлено";
        price = 0;
        rest=0;
        isAviable=false;
}

Car::Car(string model, int pass_quantity, float price, int rest, bool isAviable) {

}

Car::~Car() {

}

const string &Car::getModel() const {
    return model;
}

void Car::setModel(const string &model) {
    Car::model = model;
}

int Car::getPassQuantity() const {
    return pass_quantity;
}

void Car::setPassQuantity(int passQuantity) {
    pass_quantity = passQuantity;
}

float Car::getPrice() const {
    return price;
}

void Car::setPrice(float price) {
    Car::price = price;
}

int Car::getRest() const {
    return rest;
}

void Car::setRest(int rest) {
    Car::rest = rest;
}

bool Car::isAviable1() const {
    return isAviable;
}

void Car::setIsAviable(bool isAviable) {
    Car::isAviable = isAviable;
}

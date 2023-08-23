#include "CarShop.h"

CarShop::CarShop() {
    name = "не установлено";
}

CarShop::CarShop(string name) {
    setName(name);
}

CarShop::~CarShop() {
    for (int i = 0; i < cars.size(); ++i) {
        delete cars[i];
    }
    for (int i = 0; i < requests.size(); ++i) {
        delete requests[i];
    }
}

void CarShop::setName(string name) {
    if (name.length()<=0)
    {
        cout <<"Поле название магазина не заполнено!" << endl;
        return;
    }
    CarShop::name=name;
}

void CarShop::addCar(Car *obj) {
    cars.push_back(obj);
}

void CarShop::dellCar() {
    int x=find();
    if (x==-1){
        return;
    }
    else{
        cout <<"\"" << cars[x]->getModel() <<"\"" << " успешно удален из каталога" << endl;
        delete cars[x];
        cars.erase(cars.begin()+x);
    }
}

int CarShop::find() const {
    int ptr=-1;
    bool flag=false;
    string tmp;
    cout <<"Введите название: ";
    getline(cin,tmp);
    for (int i = 0; i < cars.size(); ++i) {
        if (cars[i]->getModel()==tmp){
            ptr=i;
            cars[i]->show();
            flag=true;
            break;
        }
    }
    if (!flag) cout <<"Ничего не найдено!" << endl;
    return ptr;
}

void CarShop::editCar() {
    int x=find();
    if (x==-1){
        return;
    }
    else {
        int menu;
        do{
            cout <<"Редактировать:" << endl;
            cout <<"1. Модель" << endl;
            cout <<"2. Кол-во пассажиров" << endl;
            cout <<"3. Стоимость" << endl;
            cout <<"4. Кол-во на складе" << endl;
            cout <<"0. Выход" << endl;
            cout <<"Выбор: " << endl;
            cin >> menu;
            switch(menu){
                case 1:{
                    string t_model;
                    cout <<"Введите новое название модели: ";
                    getline(cin,t_model);
                    cars[x]->setModel(t_model);
                    break;
                }
                case 2:{
                    int t_quantity;
                    cout <<"Введите новое кол-во пассажиров: ";
                    cin >> t_quantity;
                    cars[x]->setPassQuantity(t_quantity);
                    break;
                }
                case 3:{
                    float t_price;
                    cout <<"Введите новую стоимость(в USD): ";
                    cin >> t_price;
                    cars[x]->setPrice(t_price);
                    break;
                }
                case 4:{
                    int t_rest;
                    cout <<"Введите кол-во наличия на складе: ";
                    cin >> t_rest;
                    cars[x]->setRest(t_rest);
                    break;
                }
            } // switch end
        }while(menu!=0);
    }
}

void CarShop::makeRequests(Request *obj) {
        requests.push_back(obj);
}

void CarShop::delRequests() {
    int x=find();
    if (x==-1){
        return;
    }
    else{
        cout <<"\"" << requests[x]->getNumber() <<"Заказ \"" << "\" успешно удален из каталога" << endl;
        delete requests[x];
        requests.erase(requests.begin()+x);
    }
}

int CarShop::findRequests() const {
    int ptr=-1;
    bool flag=false;
    string tmp;
    cout <<"Введите номер заказа: ";
    getline(cin,tmp);
    for (int i = 0; i < requests.size(); ++i) {
        if (requests[i]->getNumber()==tmp){
            ptr=i;
            requests[i]->show();
            flag=true;
            break;
        }
    }
    if (!flag) cout <<"Заказ не найден!" << endl;
    return ptr;
}

void CarShop::editRequests() {
    int x=find();
    if (x==-1){
        return;
    }
    else {
        int menu;
        do {
            cout << "Редактировать:" << endl;
            cout << "1. Название заказа" << endl;
            cout << "2. Номер заказа" << endl;
            cout << "3. Автомобиль в заказе" << endl;
            cout << "0. Выход" << endl;
            cout << "Выбор: " << endl;
            cin >> menu;
            switch (menu) {
                case 1:{
                    string t_name;
                    cout <<"Введите новое название заказа: " << endl;
                    getline(cin, t_name);
                    requests[x]->setName(t_name);
                    break;
                }
                case 2:{
                    string t_number;
                    cout <<"Введите новый номер заказа: " << endl;
                    getline(cin, t_number);
                    requests[x]->setNumber(t_number);
                    break;
                }
                case 3:{
                    //1
                    break;
                }
            } // end switch

        }while(menu!=0);

    }
}

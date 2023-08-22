#include "Exeption.h"

Exeption::Exeption(string name) :name(name)
{
}



NameExeption::NameExeption(string name) :Exeption(name)
{
}
string NameExeption::showMessage()
{
    return "Ошибка имени: " + name;
}
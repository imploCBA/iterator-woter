#include "menuitem.h"

MenuItem::MenuItem(QString name, QString description, bool vegetarian, double price) {

    this->name = name;
    this->description = description;
    this->vegetarian = vegetarian;
    this->price = price;
}

QString MenuItem::getName(){

    return name;
}

QString MenuItem::getDescription(){

    return description;
}

double MenuItem::getPrice(){

    return price;
}

bool MenuItem::isVegetarian(){

    return vegetarian;
}

QString MenuItem::toString(){

    return name + ", $" + price + "\n   " + description;
}

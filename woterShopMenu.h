#ifndef WOTERSHOPMENU_H
#define WOTERSHOPMENU_H
#include "menu.h"
#include "menuitem.h"
#include "woterShopMenuIterator.h"
#include <QString>
#include <iostream>

using namespace std;


class WoterShopMenu : public Menu {

public:

    static const int MAX_ITEMS = 6;
    int numberOfItems = 0;
    MenuItem* menuItems[MAX_ITEMS];
    WoterShopMenu();
    void addItem(QString name, QString description, bool vegetarian, double price);
    MenuItem** getMenuItems();
    Iterator* createIterator();

};


#endif // WOTERSHOPMENU_H

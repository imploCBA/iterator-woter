#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H

#include "menu.h"
#include "menuitem.h"
#include "iterator.h"
#include <QList>
#include "pancakehousemenuiterator.h"

class PancakeHouseMenu : public Menu{

private:

    QList<MenuItem*> menuItems;

public:

    PancakeHouseMenu();
    void addItem(QString name, QString description, bool vegetarian, double price);
    QList<MenuItem*> getMenuItems();
    Iterator* createIterator();
};

#endif // PANCAKEHOUSEMENU_H

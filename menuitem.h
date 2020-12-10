#ifndef MENUITEM_H
#define MENUITEM_H

#include <QString>
#include "object.h"

class MenuItem : public Object {

private:

    QString name;
    QString description;
    bool vegetarian;
    double price;

public:

    MenuItem(QString, QString, bool, double);
    QString getName();
    QString getDescription();
    double getPrice();
    bool isVegetarian();
    QString toString();
};

#endif // MENUITEM_H

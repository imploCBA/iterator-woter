#include "waitress.h"

Waitress::Waitress(DinerMenu *dinerMenu, PancakeHouseMenu *pancakeHouseMenu) {

    this->dinerMenu = dinerMenu;
    this->pancakeHouseMenu = pancakeHouseMenu;
}

void Waitress::printMenu() {

    Iterator *dinerIterator = dinerMenu->createIterator();
    Iterator *pancakeIterator = pancakeHouseMenu -> createIterator();

    cout << "MENU\n----\nBREAKFAST" << endl;

    cout << "\nLUNCH" << endl;
    printMenu(dinerIterator);
}

void Waitress::printMenu(Iterator *iterator) {

    while (iterator->hasNext()) {

        MenuItem *menuItem = (MenuItem*)iterator->next();
        cout << menuItem->getName().toStdString() << ", " << endl;
        cout << menuItem->getPrice() << " -- " << endl;
        cout << menuItem->getDescription().toStdString() << endl;
    }
}

void Waitress::printVegetarianMenu() {

    printVegetarianMenu(dinerMenu->createIterator());
}

bool Waitress::isItemVegetarian(QString name) {

    Iterator *dinnerIterator = dinerMenu->createIterator();

    if (isVegetarian(name, dinnerIterator)) {
        return true;
    }
    return false;
}


void Waitress::printVegetarianMenu(Iterator *iterator) {

    while (iterator->hasNext()) {

        MenuItem *menuItem = (MenuItem*)iterator->next();

        if (menuItem->isVegetarian()) {
            cout << menuItem->getName().toStdString() << endl;
            cout << "\t\t" << menuItem->getPrice() << endl;
            cout << "\t" << menuItem->getDescription().toStdString() << endl;
        }
    }
}

bool Waitress::isVegetarian(QString name, Iterator *iterator) {

    while (iterator->hasNext()) {

        MenuItem *menuItem = (MenuItem*)iterator->next();

        if (menuItem->getName() == name) {
            if (menuItem->isVegetarian()) {
                return true;
            }
        }
    }
    return false;
}

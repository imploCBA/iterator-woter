#include "pancakehousemenu.h"

PancakeHouseMenu::PancakeHouseMenu(){

    addItem("K&B’s Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99);
    addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
    addItem("Blueberry Pancakes", "Pancakes made with fresh blueberriest", true, 3.49);
    addItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59);
    addItem("Special for armflex pancake Breakfast", "Pancakes with large portion of maple syrup", true, 300);
}
void PancakeHouseMenu::addItem(QString name, QString description, bool vegetarian, double price) {

    MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);
    menuItems.append(menuItem);
}

QList<MenuItem*> PancakeHouseMenu::getMenuItems() {

    return menuItems;
}

Iterator* PancakeHouseMenu::createIterator() {

    return new PancakeHouseMenuIterator(menuItems);
}

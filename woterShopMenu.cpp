#include "woterShopMenu.h"


DinerMenu::WoterShopMenu(){

    for (int i = 0; i < MAX_ITEMS; i++) {
        menuItems[i] = new MenuItem("", "", false, 0.0);
    }

    addItem("white woter", "it is so white", false, 4.95);
    addItem("BLUE woter", "it is so blUEEE", false, 4.95);
    addItem("red woter", "it is so red", false, 4.95);
    addItem("green woter", "it is so black?", false, 4.95);
    addItem("god woter", "it is so good", true, 5.19);
    addItem("evil woter", "NiCe!", true, 6.66);
}


void WoterShopMenu::addItem(QString name, QString description, bool vegetarian, double price){

    MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);

    if (numberOfItems >= MAX_ITEMS) {
        cout << "Sorry, woter menu is full!  Can't add this woter to menu" << endl;
    }
    else {
        menuItems[numberOfItems] = menuItem;
        numberOfItems = numberOfItems + 1;
    }

}


MenuItem** WoterShopMenu::getMenuItems(){
    return menuItems;
}


Iterator* WoterShopMenu::createIterator(){
    return new WoterShopMenuIterator(menuItems);
}

#include "woterShopMenuterator.h"
#include <iostream>

using namespace std;


DinerMenuIterator::WoterShopMenuIterator(MenuItem **items) {

    this->items = items;
    position = 0;
}


Object* WoterShopMenuIterator::next(){

    MenuItem *menuItem = items[position];
    position++;
    return menuItem;

}


bool WoterShopMenuIterator::hasNext(){

    if (position >= 6 || &items[position] == nullptr) {
        return false;
    } else {
        return true;
    }

}

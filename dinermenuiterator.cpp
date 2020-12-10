#include "dinermenuiterator.h"
#include <iostream>

using namespace std;

DinerMenuIterator::DinerMenuIterator(MenuItem **items) {

    this->items = items;
    position = 0;
}

Object* DinerMenuIterator::next(){

    MenuItem *menuItem = items[position];
    position++;
    return menuItem;
}

bool DinerMenuIterator::hasNext() {

    if (position >= 6 || &items[position] == nullptr) {

        return false;
    } else {

        return true;
    }
}

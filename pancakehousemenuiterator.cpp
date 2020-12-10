#include "pancakehousemenuiterator.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(QList<MenuItem*> items){

    this->items = items;
    position = 0;
}
Object* PancakeHouseMenuIterator::next() {

    Object *object = items.at(position);
    position = position + 1;
    return object;
}
bool PancakeHouseMenuIterator::hasNext() {

    if (position >= items.size()) {
        return false;
    } else {
        return true;
    }
}

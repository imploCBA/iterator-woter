#ifndef DINERMENUITERATOR_H
#define DINERMENUITERATOR_H

#include "iterator.h"
#include "menuitem.h"
#include "object.h"

class DinerMenuIterator : public Iterator {

private:

    MenuItem **items;
    int position;

public:

    DinerMenuIterator(MenuItem**);
    Object* next();
    bool hasNext();
};

#endif // DINERMENUITERATOR_H

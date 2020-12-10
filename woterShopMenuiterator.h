#ifndef WOTERSHOPMENUITERATOR_H
#define WOTERSHOPMENUITERATOR_H
#include "iterator.h"
#include "menuitem.h"
#include "object.h"


class WoterShopMenuIterator : public Iterator{

private:

    MenuItem **items;
    int position;


public:

    WoterShopMenuIterator(MenuItem**);
    Object* next();
    bool hasNext();

};

#endif // WOTERSHOPMENUITERATOR_H

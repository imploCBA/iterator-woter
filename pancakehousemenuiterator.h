#ifndef PANCAKEHOUSEMENUITERATOR_H
#define PANCAKEHOUSEMENUITERATOR_H

#include "iterator.h"
#include "menuitem.h"
#include "object.h"
#include <QList>

class PancakeHouseMenuIterator : public Iterator{

public:

    PancakeHouseMenuIterator(QList<MenuItem*>);
    QList<MenuItem*> items;
    int position;
    Object* next();
    bool hasNext();
};

#endif // PANCAKEHOUSEMENUITERATOR_H

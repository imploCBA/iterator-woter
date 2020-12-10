#ifndef ITERATOR_H
#define ITERATOR_H

#include "object.h"

class Iterator {

public:

    Iterator();
    virtual bool hasNext() = 0;
    virtual Object* next() = 0;
};

#endif // ITERATOR_H

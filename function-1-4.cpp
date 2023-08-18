// function-1-4.cpp

#include "person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.numPeople = pl.numPeople;
    copy.people = pl.people; // Perform a shallow copy by assigning the pointer

    return copy;
}

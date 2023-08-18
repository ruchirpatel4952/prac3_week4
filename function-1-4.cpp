#include "person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;
    newPersonList.people = pl.people; // Perform a shallow copy
    
    return newPersonList;
}

// function-1-3.cpp

#include "person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.numPeople = pl.numPeople;
    copy.people = new Person[pl.numPeople]; // Allocate a new array for the people

    for (int i = 0; i < pl.numPeople; ++i) {
        copy.people[i].name = pl.people[i].name;
        copy.people[i].age = pl.people[i].age;
    }

    return copy;
}

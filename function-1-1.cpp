// function-1-1.cpp

#include "person.h"

Person* createPersonArray(int n) {
    Person* persons = new Person[n]; // Allocate an array of n Person structs

    for (int i = 0; i < n; ++i) {
        persons[i].name = "John Doe";
        persons[i].age = 0;
    }

    return persons;
}

#include "person.h"

Person* createPersonArray(int n) {
    Person* persons = new Person[n];
    
    for (int i = 0; i < n; ++i) {
        persons[i].name = std::string("John Doe");
        persons[i].age = 0;
    }
    
    return persons;
}
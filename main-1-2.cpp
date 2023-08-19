// main-1-2.cpp

#include <iostream>
#include "Person.h"

int main() {
    int n = 3; // Number of Person structs in the list
    PersonList personList = createPersonList(n);

    std::cout << "Number of people: " << personList.numPeople << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << personList.people[i].name << ", " << personList.people[i].age << std::endl;
    }

    // Clean up memory
    delete[] personList.people;

    return 0;
}

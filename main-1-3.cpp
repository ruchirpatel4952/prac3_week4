#include <iostream>
#include "Person.h"

int main() {
    int n = 2; // Number of Person structs in the original PersonList
    
    // Create the original PersonList
    PersonList originalList;
    originalList.numPeople = n;
    originalList.people = new Person[n];
    
    for (int i = 0; i < n; ++i) {
        originalList.people[i].name = "Alice";
        originalList.people[i].age = 25;
    }
    
    // Create a deep copy of the original PersonList
    PersonList copiedList = deepCopyPersonList(originalList);
    
    // Modify the original and check if the copied data remains unchanged
    originalList.people[0].name = "Bob";
    originalList.people[0].age = 30;
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Original Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << std::endl;
        std::cout << "Copied Person " << i + 1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << std::endl;
    }
    
    // Don't forget to free the allocated memory
    delete[] originalList.people;
    delete[] copiedList.people;
    
    return 0;
}


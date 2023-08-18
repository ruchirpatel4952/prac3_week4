// main-1-4.cpp

#include <iostream>
#include "person.h"

int main() {
    int n = 3; // Number of Person structs in the original list
    PersonList originalList = createPersonList(n);

    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << originalList.people[i].name << ", " << originalList.people[i].age << std::endl;
    }

    PersonList copiedList = shallowCopyPersonList(originalList);

    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << copiedList.people[i].name << ", " << copiedList.people[i].age << std::endl;
    }

    // Clean up memory
    delete[] originalList.people;

    return 0;
}


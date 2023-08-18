// main-1-1.cpp

#include <iostream>
#include "Person.h"

int main() {
    int n = 5; // Number of Person structs in the array
    Person* personArray = createPersonArray(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": " << personArray[i].name << ", " << personArray[i].age << std::endl;
    }

    // Clean up memory
    delete[] personArray;

    return 0;
}

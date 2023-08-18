#include <iostream>
#include "person.h"

int main() {
    int n = 5; // Number of Person structs
    
    Person* personArray = createPersonArray(n);
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": Name = " << personArray[i].name << ", Age = " << personArray[i].age << std::endl;
    }
    
    // Don't forget to free the allocated memory
    delete[] personArray;
    
    return 0;
}

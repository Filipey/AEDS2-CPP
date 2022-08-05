#include <iostream>

void pointers() {
    int var = 20;
    int *p = &var;

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Addres on pointer p: " << p << std::endl;
    std::cout << "Value of address on pointer p: " << *p << std::endl;
}

int main() {
    pointers();
    return 0;
}

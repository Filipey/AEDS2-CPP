//
// Created by Filipey on 8/4/22.
//

#include "iostream"

const int MAX = 3;
int var[MAX] = {10, 100, 200};

/**
 * Every variable is a memory location and every memory location
 * has its address defined which can be accessed using (&)
 * A pointer is a variable whose value is the address of another variable
 * syntax: type *name;
 */
void pointers() {
    int var = 20;
    int *p = &var;

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Addres on pointer p: " << p << std::endl;
    std::cout << "Value of address on pointer p: " << *p << std::endl;
    std::cout << "----------------------------------" << std::endl;
}

/**
 * sizeof int = 4bytes
 * int *ptr has address 1000
 * ptr++ will move the pointer to address 1004
 */
void incrementPointers() {
    int *ptr = var;

    for (int i = 0; i < MAX; i++) {
        std::cout << "Address of var[" << i << "] = " << ptr << std::endl;
        std::cout << "Value of var[" << i << "] = " << *ptr << std::endl;

        ptr++;
    }
    std::cout << "----------------------------------" << std::endl;
}

/**
 * The same works in decrement
 * ptr-- will move the pointer to the address 996
 */
void decrementPointers() {
    int *ptr = &var[MAX - 1]; // get the address of the last element to the pointer

    for (int i = 0; i < MAX; i--) {
        std::cout << "Address of var[" << i << "] = " << ptr << std::endl;
        std::cout << "Value of var[" << i << "] = " << *ptr << std::endl;

        ptr--;
    }
    std::cout << "----------------------------------" << std::endl;
}

/**
 * There are fours arithmetic operation with pointers: ++, --, +, -
 * sizeof int = 4bytes
 */
void arithmeticPointers() {
    incrementPointers();
    decrementPointers();
}

/**
 * Pointers can be compared using relational operators such as ==, < and >
 * If p1 and p2 point to variables that are related to each other,
 * such as elements of the same array, then p1 and p2 can be
 * meaningfully compared
 */
void pointerComparisons() {
    int *ptr = var; // get the address of first element of var
    int i = 0;

    while (ptr <= &var[MAX - 1]) {
        std::cout << "Address of var[" << i << "] = " << ptr << std::endl;
        std::cout << "Value of var[" << i << "] = " << *ptr << std::endl;

        ptr++;
        i++;
    }
    std::cout << "----------------------------------" << std::endl;
}

/**
 * A pointer to pointer is a form of multiple indirection of a chain of pointers.
 * When we define a pointer to a pointer, the first pointer contain the address
 * of the second pointer, which points to the location that contains the actual value
 * syntax: type **name;
 */
void pointerToPointer() {
    int var = 3000;
    int *ptr;
    int **pptr;

    ptr = &var;
    pptr = &ptr;

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Value of ptr: " << *ptr << std::endl;
    std::cout << "Value of pptr: " << **pptr << std::endl;
    std::cout << "----------------------------------" << std::endl;
}

void menu() {
    int option = 0;

    std::cout << std::endl << "READ ALL COMMENTS IN RESPECTIVE FUNCTION LESSON TO UNDERSTAND !" << std::endl;

    while (option != -1) {
        std::cout << std::endl << "Choose a lesson:" << std::endl;
        std::cout << " 1 - Basic Knowledge of pointers" << std::endl;
        std::cout << " 2 - Pointers Arithmetic" << std::endl;
        std::cout << " 3 - Pointers Comparisons" << std::endl;
        std::cout << " 4 - Pointers of pointers" << std::endl;
        std::cout << "-1 - Finish" << std::endl;
        std::cin >> option;

        switch (option) {
            case 1:
                pointers();
                break;

            case 2:
                arithmeticPointers();
                break;

            case 3:
                pointerComparisons();
                break;

            case 4:
                pointerToPointer();
                break;

            case -1:
                break;

            default:
                std::cout << "Invalid operation. Try Again.";
        }
    }
}

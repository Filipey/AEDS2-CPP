//
// Created by Filipey on 8/4/22.
//
#include "iostream"

void introduction() {
    std::cout << "A reference variable is an alias, that is, another name"
                 " for an already existing variable."
                 << std::endl
                 << "Once a reference is initialized with a variable,"
                 " either the variable name or the reference name may be used to refer to the variable.";
}

void referencesVsPointers() {
    std::cout << "There are 3 major differences between references and pointers:"
                <<std::endl
                << "You cannot have NULL references. You must always be able to assume that a reference is connected"
                   "to a legitimate piece of storage."
                 <<std::endl
                 << "Once a reference is initialized to a object, it cannot be changed to refer to another object."
                    " Pointers can be pointed to another object any time."
                 <<std::endl
                 << "A reference must be initialized when created. Pointers can be initialized any time.";

}

void referencesMenu() {
    int option = 0;

    std::cout << std::endl << "READ ALL COMMENTS IN RESPECTIVE FUNCTION LESSON TO UNDERSTAND !" << std::endl;

    while (option != -1) {
        std::cout << std::endl;
        std::cout << std::endl << "Choose a lesson:" << std::endl;
        std::cout << std::endl << " 1 - Introduction to References" << std::endl;
        std::cout << std::endl << " 2 - References vs Pointers" << std::endl;
        std::cout << std::endl << "-1 - Finish" << std::endl;
        std::cin >> option;

        switch (option) {
            case 1:
                introduction();
                break;
            case 2:
                referencesVsPointers();
                break;

            case -1:
                break;

            default:
                std::cout << "Invalid operation. Try Again." << std::endl;
        }
    }
}
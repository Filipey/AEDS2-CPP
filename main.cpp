#include "pointers/pointers.h"
#include "references/references.h"
#include "iostream"

using namespace std;

int main() {
    int option = 0;

    while (option != -1) {
        cout << endl;
        cout << "Choose a theme to learn:" << endl;
        cout << " 1 - Pointers" << endl;
        cout << " 2 - References" << endl;
        cout << "-1 - Exit" << endl;
        cin >> option;

        switch (option) {
            case 1:
                pointersMenu();
                break;

            case 2:
                referencesMenu();
                break;

            case -1:
                break;

            default:
                cout << "Invalid operation. Try again." << endl;
        }
    }

    return 0;
}

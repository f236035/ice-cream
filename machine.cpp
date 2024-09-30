#include <iostream>
#include <string>
using namespace std;

class IceCreamMachine {
private:
    string flavor;
    string coneType;
    double price;

public:
    // Constructor to initialize default values
    IceCreamMachine() : flavor("Vanilla"), coneType("Regular"), price(3.0) {}

    // Function to display the menu
    void displayMenu() {
        cout << "Welcome to the Ice Cream Machine!" << endl;
        cout << "Choose your flavor:" << endl;
        cout << "1. Vanilla" << endl;
        cout << "2. Chocolate" << endl;
        cout << "3. Strawberry" << endl;
        cout << "4. Mango" << endl;
        cout << "Choose your cone type:" << endl;
        cout << "1. Regular" << endl;
        cout << "2. Waffle" << endl;
    }

    // Function to take the order
    void takeOrder() {
        int flavorChoice, coneChoice;

        // Taking flavor input
        cout << "Enter your flavor choice (1-4): ";
        cin >> flavorChoice;
        switch (flavorChoice) {
            case 1: flavor = "Vanilla"; break;
            case 2: flavor = "Chocolate"; break;
            case 3: flavor = "Strawberry"; break;
            case 4: flavor = "Mango"; break;
            default: cout << "Invalid choice. Defaulting to Vanilla." << endl;
        }

        // Taking cone type input
        cout << "Enter your cone choice (1-2): ";
        cin >> coneChoice;
        switch (coneChoice) {
            case 1: coneType = "Regular"; price += 0.0; break;
            case 2: coneType = "Waffle"; price += 1.0; break;
            default: cout << "Invalid choice. Defaulting to Regular cone." << endl;
        }
    }

    // Function to display the order
    void displayOrder() {
        cout << "\nYour Ice Cream Order:" << endl;
        cout << "Flavor: " << flavor << endl;
        cout << "Cone Type: " << coneType << endl;
        cout << "Total Price: $" << price << endl;
        cout << "Enjoy your ice cream!" << endl;
        cout << "Hope to see you soon!!!" << endl;
    }
};

int main() {
    IceCreamMachine machine;

    machine.displayMenu();
    machine.takeOrder();
    machine.displayOrder();

    return 0;
}


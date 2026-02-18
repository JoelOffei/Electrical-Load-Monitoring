#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Appliance {
private:
    string name;
    double powerRating;   // in watts
    double usageHours;    // per day

public:
    Appliance(string n, double p, double u) {
        name = n;
        powerRating = p;
        usageHours = u;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Power Rating (W): " << powerRating << endl;
        cout << "Usage Hours per Day: " << usageHours << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    vector<Appliance> appliances;

    int choice;
    string name;
    double power, hours;

    do {
        cout << "\nElectrical Load Monitoring System\n";
        cout << "1. Register Appliance\n";
        cout << "2. View Appliances\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter appliance name: ";
                cin >> name;

                cout << "Enter power rating (W): ";
                cin >> power;

                cout << "Enter daily usage hours: ";
                cin >> hours;

                appliances.push_back(Appliance(name, power, hours));
                cout << "Appliance registered successfully!\n";
                break;

            case 2:
                for (auto &a : appliances) {
                    a.display();
                }
                break;

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}

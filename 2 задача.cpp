#include <iostream>
#include <string>
using namespace std;

class ResistanceCalculator {
private:
    double resistor1;
    double resistor2;
    string connectionType;

public:
    ResistanceCalculator() : resistor1(0.0), resistor2(0.0), connectionType("") {}
    void Read() {
       cout << "Enter the resistance of the first resistor: ";
       cin >> resistor1;
       cout << "Enter the resistance of the second resistor: ";
       cin >> resistor2;
       cout << "Enter the connection type (posled / parallel): ";
       cin >> connectionType;
    }
    double CalculateTotalResistance() {
        if (connectionType == "posled") {
            return resistor1 + resistor2;
        } else if (connectionType == "parallel") {
            return 1.0 / (1.0 / resistor1 + 1.0 / resistor2);
        } else {
           cerr << "Invalid connection type." << endl;
            return -1.0;
        }
    }
    void Display() {
        cout << "Resistance of the first resistor: " << resistor1 << " ohms" << endl;
        cout << "Resistance of the second resistor: " << resistor2 << " ohms" << endl;
        cout << "Connection type: " << connectionType <<endl;
        double totalResistance = CalculateTotalResistance();
        if (totalResistance >= 0) {
           cout << "Total resistance of the connection: " << totalResistance << " ohms" << endl;
        }
    }
};
int main() {
    ResistanceCalculator calculator;
    calculator.Read();
    calculator.Display();

    return 0;
}

#include <iostream>
#include <string>

using namespace std;
class Worker {
public:
    // Конструктор класса Worker
    Worker(const string& firstName, const string& lastName, double hoursWorked, double dailyRate)
            : firstName(firstName), lastName(lastName), hoursWorked(hoursWorked), dailyRate(dailyRate) {}
    double getSalary() const {
        return hoursWorked * dailyRate;
    }
    void Read() {
       cout << "Tape name: ";
       cin >> firstName;
       cout << "Tape surname: ";
       cin >> lastName;
       cout << "Tape hours: ";
       cin >> hoursWorked;
       cout << "Tape dailyRate: ";
       cin >> dailyRate;
    }
    void Display() const {
        cout << "Name: " << firstName << endl;
        cout << "Surname: " << lastName << endl;
        cout << "Hours worked: " << hoursWorked << endl;
        cout << "dailyRate: " << dailyRate << endl;
        cout << "Salary: " << getSalary() << endl;
    }
private:
    string firstName;
    string lastName;
    double hoursWorked;
    double dailyRate;
};
int main() {
    // Создаем объект класса Worker
    Worker worker("Kirill", "Nigmatullin", 40.0, 20.0);
    worker.Read();
    worker.Display();
    return 0;
}

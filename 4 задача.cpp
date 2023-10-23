#include <iostream>
#include <string>
using namespace std;
class Money {
private:
    int rubles;
    int kopecks;

public:
    Money() : rubles(0), kopecks(0) {}
    Money(int rubles, int kopecks) : rubles(rubles), kopecks(kopecks) {}
    void Read() {
        string action;
        cout << "Enter the action (+, -, *, /): ";
        cin >> action;
        if (action == "+" || action == "-" || action == "*" || action == "/") {
            cout << "Enter your amount in rubles: ";
            cin >> rubles;
            cout << "Enter your amount in kopecks: ";
            cin >> kopecks;
        }
        if (action == "+") {
            int rubles2, kopecks2;
            cout << "Enter the second amount in rubles: ";
            cin >> rubles2;
            cout << "Enter the second amount in kopecks: ";
            cin >> kopecks2;
            Money other(rubles2, kopecks2);
            *this = Add(other);
        } else if (action == "-") {
            int rubles2, kopecks2;
            cout << "Enter the amount to subtract in rubles: ";
            cin >> rubles2;
            cout << "Enter the amount to subtract in kopecks: ";
            cin >> kopecks2;
            Money other(rubles2, kopecks2);
            *this = Subtract(other);
        } else if (action == "*") {
            double multiplier;
            cout << "Enter a number to multiply your money by: ";
            cin >> multiplier;
            *this = Multiply(multiplier);
        } else if (action == "/") {
            double divisor;
            cout << "Enter a number to divide your money by: ";
            cin >> divisor;
            *this = Divide(divisor);
        } else {
            cerr << "Unknown action: " << action <<endl;
        }
    }
    void Display() const {
        cout << "Result: " << rubles << " rubles and " << kopecks << " kopecks" << endl;
    }
    Money Add(const Money& other) const {
        int totalRubles = rubles + other.rubles;
        int totalKopecks = kopecks + other.kopecks;
        if (totalKopecks >= 100) {
            totalRubles += totalKopecks / 100;
            totalKopecks %= 100;
        }
        return Money(totalRubles, totalKopecks);
    }
    Money Subtract(const Money& other) const {
        int totalRubles = rubles - other.rubles;
        int totalKopecks = kopecks - other.kopecks;
        if (totalKopecks < 0) {
            totalRubles -= 1;
            totalKopecks += 100;
        }
        return Money(totalRubles, totalKopecks);
    }
    Money Multiply(double factor) const {
        int totalKopecks = static_cast<int>((rubles * 100 + kopecks) * factor);
        int totalRubles = totalKopecks / 100;
        totalKopecks %= 100;
        return Money(totalRubles, totalKopecks);
    }
    Money Divide(double divisor) const {
        if (divisor == 0.0) {
            cerr << "Error: Division by zero." << endl;
            return Money(0, 0);
        }
        double totalAmount = rubles * 100 + kopecks;
        totalAmount /= divisor;
        int totalRubles = static_cast<int>(totalAmount / 100);
        int totalKopecks = static_cast<int>(totalAmount) % 100;
        return Money(totalRubles, totalKopecks);
    }
};
int main() {
    Money money;
    money.Read();
    money.Display();

    return 0;
}

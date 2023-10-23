#include <iostream>
using namespace std;
class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    Date(int dateInt) {
        year = dateInt / 10000;
        month = (dateInt % 10000) / 100;
        day = dateInt % 100;
    }
    int getYear() const {
        return year;
    }
    int getMonth() const {
        return month;
    }
    int getDay() const {
        return day;
    }
    void setYear(int y) {
        year = y;
    }
    void setMonth(int m) {
        month = m;
    }
    void setDay(int d) {
        day = d;
    }
    void addDays(int days) {
        day += days;
        while (day > daysInMonth()) {
            day -= daysInMonth();
            if (month == 12) {
                month = 1;
                year++;
            } else {
                month++;
            }
        }
    }
    int daysInMonth() const {
        if (month == 2) {
                return 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return 30;
        } else {
            return 31;
        }
    }
    void Read() {
        cout << "Enter the year: ";
        cin >> year;
        cout << "Enter the month: ";
        cin >> month;
        cout << "Enter the day: ";
        cin >> day;
        int daysToAdd;
        cout << "Enter the number of days to add: ";
        cin >> daysToAdd;
        addDays(daysToAdd);
    }
    void Display() {
        cout << "Date: " << year << " year, " << month << " month, " << day << " day" << endl;
    }
};
int main() {
    Date date1(2023, 10, 17);
    date1.Read();
    date1.Display();
    return 0;
}

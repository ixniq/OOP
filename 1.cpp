#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    float gradePointAverage;
public:
    Student() : age(0), gradePointAverage(0.0) {}
    void setName(const string& studentName) {
        name = studentName;
    }
    void setAge(int studentAge) {
        age = studentAge;
    }
    void setGradePointAverage(float studentGPA) {
        gradePointAverage = studentGPA;
    }
    void displayStudentInfo() {
        cout << "Imya: " << name << endl;
        cout << "Vozrast: " << age << endl;
        cout << "Sredniy ball: " << gradePointAverage << endl;
    }
};
int main() {
    Student student1;
    student1.setName("Kirill Nigmatullin ");
    student1.setAge(19);
    student1.setGradePointAverage(4.5);
    cout << "Informatsiya o studente:" << endl;
    student1.displayStudentInfo();
    return 0;
}

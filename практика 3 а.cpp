#include <iostream>
using namespace std;
template <typename T>
T najtiMaksimum(const T arr[], int razmer) {
    if (razmer <= 0) {
        cerr << "Oshibka: Razmer massiva dolzhen byt' bol'she 0." << endl;
        return T();
    }
    T maksimum = arr[0];
    for (int i = 1; i < razmer; ++i) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}
int main() {
    int massivInt[] = {3, 7, 1, 5, 9};
    double massivDouble[] = {2.5, 8.9, 4.2, 6.7};
    int maksimumInt = najtiMaksimum(massivInt, 5);
    double maksimumDouble = najtiMaksimum(massivDouble, 4);
    cout << "Maksimal'nyy element v massivInt: " << maksimumInt << endl;
    cout << "Maksimal'nyy element v massivDouble: " << maksimumDouble << endl;

    return 0;
}

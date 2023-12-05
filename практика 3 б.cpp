#include <iostream>
using namespace std;
template <typename T>
class ObrabotchikMassiva {
private:
    T* massiv;
    int razmer;
public:
    ObrabotchikMassiva(int razmerMassiva) : razmer(razmerMassiva) {
        if (razmer <= 0) {
            cerr << "Oshibka: Razmer massiva dolzhen byt' bol'she 0." << endl;
            razmer = 0;
            massiv = nullptr;
        } else {
            massiv = new T[razmer];
        }
    }
    ~ObrabotchikMassiva() {
        delete[] massiv;
    }
    void zapisatMassiv(const T sourceMassiv[]) {
        for (int i = 0; i < razmer; ++i) {
            massiv[i] = sourceMassiv[i];
        }
    }
    void zapisatMassivObratno(const T sourceMassiv[]) {
        for (int i = 0; i < razmer; ++i) {
            massiv[i] = sourceMassiv[razmer - 1 - i];
        }
    }
    void chtenieMassiva() const {
        for (int i = 0; i < razmer; ++i) {
            cout << massiv[i] << " ";
        }
        cout << endl;
    }
    void chtenieMassivaObratno() const {
        for (int i = razmer - 1; i >= 0; --i) {
            cout << massiv[i] << " ";
        }
        cout << endl;
    }
    void zapisatElement(int indeks, const T& znachenie) {
        if (indeks >= 0 && indeks < razmer) {
            massiv[indeks] = znachenie;
        } else {
            cerr << "Oshibka: Indeks za predelami diapazona." << endl;
        }
    }
    T chtenieElementa(int indeks) const {
        if (indeks >= 0 && indeks < razmer) {
            return massiv[indeks];
        } else {
            cerr << "Oshibka: Indeks za predelami diapazona." << endl;
            return T(); 
        }
    }
    int poluchitRazmer() const {
        return razmer;
    }
};
int main() {
    int massivInt[] = {1, 2, 3, 4, 5};
    double massivDouble[] = {1.1, 2.2, 3.3, 4.4};
    ObrabotchikMassiva<int> intObrabotchik(5);
    ObrabotchikMassiva<double> doubleObrabotchik(4);
    intObrabotchik.zapisatMassiv(massivInt);
    doubleObrabotchik.zapisatMassiv(massivDouble);
    cout << "Original'nyy massiv int: ";
    intObrabotchik.chtenieMassiva();
    cout << "Obratnyy massiv int: ";
    intObrabotchik.zapisatMassivObratno(massivInt);
    intObrabotchik.chtenieMassivaObratno();
    cout << "Original'nyy massiv double: ";
    doubleObrabotchik.chtenieMassiva();
    cout << "Obratnyy massiv double: ";
    doubleObrabotchik.zapisatMassivObratno(massivDouble);
    doubleObrabotchik.chtenieMassivaObratno();
    cout << "Element s indeksom 2 v massivInt: " << intObrabotchik.chtenieElementa(2) << endl;
    cout << "Element s indeksom 3 v massivDouble: " << doubleObrabotchik.chtenieElementa(3) << endl;
    return 0;
}

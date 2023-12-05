#include <iostream>
#include <string>
using namespace std;
class Telefon {
private:
    string model;
    double tsena;
public:
    Telefon() : tsena(0.0) {}
    void setModel(const string& telefonModel) {
        model = telefonModel;
    }
    void setTsena(double telefonTsena) {
        tsena = telefonTsena;
    }
    void poluchitInformatsiyu() {
        cout << "Model': " << model << endl;
        cout << "Tsena: " << tsena << endl;
    }
};

int main() {
    Telefon telefon1;
    telefon1.setModel("iPhone 13");
    telefon1.setTsena(999.99);
    cout << "Informatsiya o telefone:" << endl;
    telefon1.poluchitInformatsiyu();
    return 0;
}
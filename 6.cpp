#include <iostream>
#include <string>
using namespace std;
class Chelovek {
private:
    string imya;
    int vozrast;
    string pol;
public:
    Chelovek() : vozrast(0) {}
    void setImya(const string& chelovekImya) {
        imya = chelovekImya;
    }
    void setVozrast(int chelovekVozrast) {
        vozrast = chelovekVozrast;
    }
    void setPol(const string& chelovekPol) {
        pol = chelovekPol;
    }
    void poluchitInformatsiyu() {
        cout << "Imya: " << imya << endl;
        cout << "Vozrast: " << vozrast << endl;
        cout << "Pol: " << pol << endl;
    }
};

int main() {
    Chelovek chelovek1;
    chelovek1.setImya("Ivan");
    chelovek1.setVozrast(25);
    chelovek1.setPol("Muzhskoy");
    cout << "Informatsiya o cheloveke:" << endl;
    chelovek1.poluchitInformatsiyu();
    return 0;
}

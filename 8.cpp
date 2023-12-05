#include <iostream>
#include <string>
using namespace std;
class Kot {
private:
    string imya;
    int vozrast;
    string cvet;
public:
    Kot() : vozrast(0) {}
    void setImya(const string& kotImya) {
        imya = kotImya;
    }
    void setVozrast(int kotVozrast) {
        vozrast = kotVozrast;
    }
    void setCvet(const string& kotCvet) {
        cvet = kotCvet;
    }
    void poluchitInformatsiyu() {
        cout << "Imya: " << imya << endl;
        cout << "Vozrast: " << vozrast << endl;
        cout << "Cvet: " << cvet << endl;
    }
};
int main() {
    Kot kot1;
    kot1.setImya("Murzik");
    kot1.setVozrast(3);
    kot1.setCvet("Seryy");
    cout << "Informatsiya o kote:" << endl;
    kot1.poluchitInformatsiyu();
    return 0;
}

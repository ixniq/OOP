#include <iostream>
#include <string>
using namespace std;
class Avtomobil {
private:
    string marka;
    string model;
    int godVypuska;
public:
    Avtomobil() : godVypuska(0) {}
    void setMarka(const string& avtoMarka) {
        marka = avtoMarka;
    }
    void setModel(const string& avtoModel) {
        model = avtoModel;
    }

    void setGodVypuska(int god) {
        godVypuska = god;
    }
    void displayAvtomobilInfo() {
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "God vypuska: " << godVypuska << endl;
    }
};
int main() {
    Avtomobil avto1;
    avto1.setMarka("Toyota");
    avto1.setModel("Camry");
    avto1.setGodVypuska(2022);
    cout << "Informatsiya ob avtomobile:" << endl;
    avto1.displayAvtomobilInfo();
    return 0;
}

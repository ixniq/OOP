#include <iostream>
#include <string>
using namespace std;
class Bank {
private:
    string nazvanie;
    string strana;
public:
    Bank() {}
    void setNazvanie(const string& bankNazvanie) {
        nazvanie = bankNazvanie;
    }
    void setStrana(const string& bankStrana) {
        strana = bankStrana;
    }
    void poluchitInformatsiyu() {
        cout << "Nazvanie: " << nazvanie << endl;
        cout << "Strana: " << strana << endl;
    }
};
int main() {
    Bank bank1;
    bank1.setNazvanie("Sberbank");
    bank1.setStrana("Rossiya");
    cout << "Informatsiya o banke:" << endl;
    bank1.poluchitInformatsiyu();
    return 0;
}
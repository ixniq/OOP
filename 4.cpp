#include <iostream>
using namespace std;
class Pryamougolnik {
private:
    double shirina;
    double vysota;
public:
    Pryamougolnik() : shirina(0.0), vysota(0.0) {}
    void setShirina(double pryamougolnikShirina) {
        shirina = pryamougolnikShirina;
    }
    void setVysota(double pryamougolnikVysota) {
        vysota = pryamougolnikVysota;
    }
    double raschetPloshchadi() {
        return shirina * vysota;
    }
};
int main() {
    Pryamougolnik pryamougolnik1;
    pryamougolnik1.setShirina(5.0);
    pryamougolnik1.setVysota(10.0);
    cout << "Ploshchad' pryamougolnika: " << pryamougolnik1.raschetPloshchadi() << endl;
    return 0;
}


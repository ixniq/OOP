#include <iostream>
#include <string>
using namespace std;
class Televizor {
private:
    string model;
    double razmerEkrana;
public:
    Televizor() : razmerEkrana(0.0) {}
    void setModel(const string& televizorModel) {
        model = televizorModel;
    }
    void setRazmerEkrana(double televizorRazmerEkrana) {
        razmerEkrana = televizorRazmerEkrana;
    }
    void poluchitInformatsiyu() {
        cout << "Model': " << model << endl;
        cout << "Razmer ekrana: " << razmerEkrana << " dyuymov" << endl;
    }
};
int main() {
    Televizor televizor1;
    televizor1.setModel("Samsung QLED");
    televizor1.setRazmerEkrana(55.0);
    cout << "Informatsiya o televizore:" << endl;
    televizor1.poluchitInformatsiyu();
    return 0;
}
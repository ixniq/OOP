#include <iostream>
#include <cmath>
using namespace std;
class Krug {
private:
    double radius;
public:
    Krug() : radius(0.0) {}
    void setRadius(double krugRadius) {
        radius = krugRadius;
    }
    double raschetPloshchadi() {
        return M_PI * radius * radius;
    }
};
int main() {
    Krug krug1;
    krug1.setRadius(3.0);
    cout << "Ploshchad' kruga: " << krug1.raschetPloshchadi() << endl;
    return 0;
}


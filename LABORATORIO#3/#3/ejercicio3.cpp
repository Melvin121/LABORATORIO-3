#include "iostream"
#include "cmath"

using namespace std;

int main()
{
    cout << endl;
    cout << "PROYECTO CALCU Y-23"<< endl;

    float a, b, c, x1, x2, resp1, resp2;

    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
    cout << "Ingrese c: "; cin >> c;

    x1 = (- b + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
    

    x2 = (- b - (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
    

    cout << "La x1 equivale a: " << x1 << endl;
    cout << "La x2 equivale a: " << x2 << endl;
    
}
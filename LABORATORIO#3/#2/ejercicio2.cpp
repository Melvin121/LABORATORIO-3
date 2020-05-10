#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    int a;
    float peri, area, pi = 3.1416;
     
    cout << "ÁREAS Y PERIMETROS" << endl << endl;
    
    cout << "Inserte el radio: "; cin >> a;
    cout << endl;

    peri = 2* pi* a;
    cout << "El perimetro equivale a: " << peri << endl;

    area = pi* pow(a, 2);
    cout << "El area equivale a: " << area << endl;
    




}
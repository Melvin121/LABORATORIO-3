#include "iostream"

using namespace std;

int main()
{
    float a, b, c, sum, prom;

    cout << endl;

    cout << "CALCULE SU PROMEDIO" << endl << endl;

    
    cout << "DIGITE EL VALOR DE A: "; cin >> a;
    cout << endl;

    cout << "DIGITE EL VALOR DE B: "; cin >> b; 
    cout << endl;

    cout << "DIGITE EL VALOR DE c: "; cin >> c;
    cout << endl;

    sum = a + b + c;
    prom = sum / 3;
    cout << "SU PROMEDIO ES: " << prom << endl;

    return 0;
}
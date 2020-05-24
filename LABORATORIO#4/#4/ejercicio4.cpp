#include "iostream"

using namespace std;

int main(void)
{
    string palabra;

    cout << "Ingrese la palabra a revisar: "; cin >> palabra; cout << endl;

    if( palabra.length() > 10 )
    {
        cout << "La palabra tiene mas de 10 caracteres" << endl;

    }
    else
    {
        cout << "La palabra tiene menos de 10 caracteres" << endl;
    }
    if( palabra.length() % 2 == 0 )
    {
        cout << "La cantidad de caracteres es par" << endl;

    }
    else
    {
        cout << "La cantidad de caracteres es impar" << endl;

    }

    return(0);

}
    
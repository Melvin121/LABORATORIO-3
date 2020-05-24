#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    string palabra;
    
    
    cout << "Ingrese la palabra a revisar: "; cin >> palabra; cout << endl;

    if( palabra.at(0) == palabra.at(palabra.length()-1))
    {
        cout << "La palabra inicia y termina con la misma letra"; cout << endl;

    }
    else
    {
        cout << "La palabra no inicia ni termina con la misma letra"; cout << endl;

    }
    
    
}
#include "iostream"

using namespace std;

int main(void)
{
    int a, b, respuesta;
    

    cout << "Ingrese numero a: "; cin >> a; cout << endl;
    cout << "Ingrese numero b: "; cin >> b; cout << endl;

    if( a / b == 0)
    {

        cout << "Los numeros son divisibles entre si";


    }
    else
    {
        cout << "Los numeros no son divisibles entre si";

    }
    
    cout << endl;

    return(0);



}

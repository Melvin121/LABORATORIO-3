#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{
    string concatenar;
    string string1 = "Leche";
    string string2 = "Queso";
    string string3 = "Papel";
    string string4 = "Jabon";
    string string5 = "Soda";

    float precio, total;
    int cant;
   
    cout << endl;

    cout << "RECIBO DE COMPRA" << endl << endl;
   
    cout << "Ingrese el producto: "; cin >> string1, string2, string3, string4, string5;
    cout << "Ingrese el precio: "; cin >> precio;
    cout << "Ingrese la cantidad de producto: "; cin >> cant;

    total = cant * precio;

    cout << "Usted ha gastado: $ " << total << " en total" << endl << endl;


}
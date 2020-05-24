#include "iostream"

using namespace std;

int main(void)
{
   int a;
   
    cout << "Ingrese el numero a revisar: ";cin >> a; cout << endl;

    if( a > 0)
    {
        cout << "El numero es positivo" << endl;

    } 
    else if( a < 0)
     {
      cout << "El numero es negativo" << endl;


    }
     else if( a == 0)
     {
                cout << "El numero es cero" << endl;

     }

    return(0);

}
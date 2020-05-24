#include "iostream"

using namespace std;

int main(void)
{
   int a;

    cout << "Ingrese el numero a revisar: "; cin >> a; cout << endl;

    if( a % 2 == 0)
    {
        cout << "Su numero es par :D"; cout << endl;

    }
    else
    {
        cout << "Su numero es impar :D"; cout << endl;
    }
    

    return(0);


}
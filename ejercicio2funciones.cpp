#include <iostream>//obtener vocal con numero ingresado
using namespace std;
//Proceso
char obtenerVocal(int numero)
{
    if (numero == 1) return 'a';
    if (numero == 2) return 'e';
    if (numero == 3) return 'i';
    if (numero == 4) return 'o';
    if (numero == 5) return 'u';
    return '?';// (Para cuando se ingrese otro valor número)
}

int main()
{
    int n;
    char vocal;// (char para almacemar un solo caracter)
    //Entrada
    cout << "Ingresa un numero del 1 al 5: ";
    cin >> n; // n= número a ingresar 
    vocal = obtenerVocal(n);
    //Salida
    if (vocal == '?')
        cout << "Numero invalido." << endl;
    else
        cout << "La vocal correspondiente es: " << vocal << endl;
}

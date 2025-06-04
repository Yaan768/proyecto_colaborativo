#include <iostream>//formar un triangulo
using namespace std;

int main() {
    float a, b, c;//a,b,c: longitudes a ingresar 
    
    cout << "Ingrese las tres longitudes: ";
    cin >> a >> b >> c;
    
    if (a<=0 || b<=0 || c<0){
    	cout << "Las longitudes deben ser mayores que cero" << endl;
    	return 1;
	}
	
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Se puede formar un triangulo." << endl;//Salida
    } 
	else {
        cout << "No se puede formar un triangulo." << endl;//salida
    }
    return 0;
}

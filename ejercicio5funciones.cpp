#include <iostream>//Nuevo precio de venta ganando un porcentaje 
using namespace std;
//Proceso
double calcular_precio_venta(double pc, double pg) //para hallar el precio de venta ganando un n% aplicamos:
{
    return pc + (pc * pg / 100); 
}
int main() {
	//Entrada
    double pc, pg;//(pc=Precio de compra, pg=Porcentaje de ganancia) , (Utilizamos el dato double, es más preciso)
    cout << "Precio de compra: ";
    cin >> pc;
    cout << "Porcentaje de ganancia: ";
    cin >> pg;
    //Salida
    cout << "Precio de venta: " << calcular_precio_venta(pc, pg) << endl;
}


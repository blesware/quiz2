#include <iostream>

using namespace std;

//Main
int main() {
    
    //Variables
    double costoMateriales = 0.0, costoManoDeObra = 0.0, costoTotal = 0.0, porcentajeLimite = 0.0, limite = 0.0;
    const double DESCUENTO = 0.10;    

    //Input
    cout << "Digite el costo de los materiales: $";
    cin >> costoMateriales;

    cout << endl;

    cout << "Digite el costo de la mano de obra: $";
    cin >> costoManoDeObra;

    cout << endl;

    cout << "Digite el porcentaje limite (1% - 100%): ";
    cin >> porcentajeLimite;

    cout << endl;

    //Proceso y output
    if ((costoMateriales > 0 && costoManoDeObra > 0) && (porcentajeLimite >= 1 && porcentajeLimite <= 100)) {

        limite = costoManoDeObra + (costoManoDeObra * (porcentajeLimite / 100));

        if (costoMateriales > limite) {

            costoTotal = costoMateriales + costoManoDeObra;
            costoTotal = costoTotal - (costoTotal * DESCUENTO);
            cout << "El costo total del proyecto es de $" << costoTotal << ", se aplico 10% de descuento";

        } else {

            costoTotal = costoMateriales + costoManoDeObra;
            cout << "El costo total del proyecto es de $" << costoTotal << ", no se aplico descuento";
        }        

    } else {

        if (costoMateriales < 0) {

            cout << "ERROR: El costo de los materiales no puede ser negativo" << endl;
        } 

        if (costoManoDeObra < 0) {

            cout << "ERROR: El costo de la mano de obra no puede ser negativo" << endl;
        }      

        if (porcentajeLimite < 1 || porcentajeLimite > 100) {

            cout << "ERROR: El porcentaje debe estar entre 1% a 100%" << endl;
        }        
    }

    return 0;
}


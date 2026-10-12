#include <iostream>
using namespace std;

int main() {
    int saldoDisponible = 1000; 
    int opcion, retiro, deposito;

    do {
        cout << "Bienvenido, seleccione una opcion." << endl;
        cout << "1. Consultar saldo." << endl;
        cout << "2. Depositar." << endl;
        cout << "3. Retirar." << endl;
        cout << "4. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) { 
            case 1:
            cout << "Tu saldo es de: $ " << saldoDisponible << endl;
            break;

            case 2:
            do {
            cout << "Cuanto desea depositar? " << endl;
            cin >> deposito;
            if (deposito <= 0) {
            cout << "Ingrese un monto valido. " << endl;
            }
            } 
            while (deposito <= 0);     
            saldoDisponible += deposito; 
            cout << "Ha depositado la cantidad de: $ " << deposito << " dolares. " << endl;
            cout << "Nuevo saldo: $ " << saldoDisponible << endl;
            break;

            case 3:
            do {
            cout << "Cuanto desea retirar? Saldo disponible: $ " << saldoDisponible << endl;
            cin >> retiro;
            if (retiro <= 0) {
            cout << "Monto invalido. Intente de nuevo. " << endl;
            }
            } 
            while (retiro <= 0); 
            saldoDisponible -= retiro; 
            cout << "Ha retirado: $ " << retiro << " dolares. " << endl;
            cout << "Nuevo saldo: $ " << saldoDisponible << endl;
            break;

            case 4:
            cout << "Gracias por usar el cajero. " << endl;
            break;
            default:
            cout << "Ingrese una opcion valida (1-4)." << endl;
            break;
        }

    } while (opcion != 4);

    return 0;
}
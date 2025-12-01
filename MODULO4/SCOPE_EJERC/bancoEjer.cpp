#include <iostream>
using std::cout;
using std::cin; 

void mostrarSaldo(double saldo);

double depositarDinero(double saldo);

double retirarDinero(double monto);


int main() {
    double saldo = 2000;
    cout << "***BIENVENIDO AL SISTEMA BANCARIO*** \n";
    int op;
    do {
        cout << "1. Mostrar Saldo \n";
        cout << "2. Depositar Dinero \n";
        cout << "3. Retirar Dinero \n";
        cout << "4. Salir \n";
        cout << "Ingrese una opcion: ";
        cin >> op; 
        switch (op) {
        case 1:
            mostrarSaldo(saldo);
            break;
        case 2:
            saldo = depositarDinero(saldo);
            break;
        case 3:
            saldo = retirarDinero(saldo);
            break;
        case 4:
            cout << "Gracias por usar nuestro sistema! \n";
            break;
        default:
            cout << "ERROR \n";
            break;
        }         
    } while (op != 4);
    
    return 0;
}

void mostrarSaldo(double saldo) { cout << "Su saldo es de: " << saldo << "\n";  }

double depositarDinero(double saldo) {
    int dep = 0;
    cout << "Cuando desea depositar: ";
    cin >> dep;
    cout << "\n Saldo actual: " << saldo + dep << "\n"; 
    return saldo + dep;
}

double retirarDinero(double monto) {
    int ret = 0;
    do {
        cout << "Cuando desea retirar: ";
        cin >> ret;
        cout << "\n";
        if (monto < ret ) {
            cout << "Saldo insuficiente \n";
        } else {
            cout << "Monto retirado, Saldo actual: "<< monto - ret << "\n";
        }        
    } while (ret > monto);
    return monto - ret;
}
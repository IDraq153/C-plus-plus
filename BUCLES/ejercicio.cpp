//PIDE AL USUARIO 2 NUMEROS INICIO Y FINAL MUYESTRA TODOS LOS PARES ENTRE ELLOS
#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int num1, num2;
    cout << "INGRESE SU 1° NUMERO: ";
    cin >> num1;

    cout << "";

    cout << "INGRESE SU 2° NUMERO: ";
    cin >> num2;

    while (num1 <= num2) {
        if (num1 % 2 != 0) {
            num1++;
            continue;
        }
        cout << num1 << " "; 
        num1++;
    }
        



    return 0;
}
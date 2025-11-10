#include <iostream>
using std::cout;
using std::cin;

int main() {
    int tabla;
    cout << "Ingrese que tabla: ";
    cin >> tabla;

    for (int i = 1; i <= 10; i++) {
        cout << tabla << " x " << i << " = " << i*tabla << std::endl; 
    }

    return 0;
}
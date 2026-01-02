#include <iostream>
using std::cout;

void cambio(std::string &x, std::string &y);

int main() {
    std::string x = "cafe";
    std::string y = "agua";
    cambio(x, y);
    
    cout << "X: " << x << "\n";
    cout << "Y: " << y << "\n";
    
    return 0;
}

//PASAR POR VALOR ES HACER LAS COPIAS 
//SE PASAN UNAS COPIAS DE LOS VALORES QUE PASAMOS PERO 
//NO AFECTA A LOS ORIGINALES --> para esto se usa por referencia
void cambio(std::string &x, std::string &y) {
    std::string temp;
    temp = x; 
    x = y;
    y = temp;    
}
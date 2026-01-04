#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

int main() {
    // new asigna memoria
    int *pNum = nullptr;
    //Esto apunta a una direccion donde guardaremos un entero
    pNum = new int;
    *pNum = 25;

    cout << "Direccion:" << pNum << std::endl;
    cout << "Valor:" << *pNum << std::endl;

    //BUENAS PRACTICAS LIBERAR MEMORIA EN ESA DIRECCION
    delete pNum;
    return 0;
}
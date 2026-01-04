#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

//OBJETOS
class Humano {
    public:
        string_t nombre = "Persona";
        string_t cargo = "";
        int edad = 18;

    void comer() {
        cout << "Esta persona come...\n";
    }
    void beber() {
        cout << "Esta persona bebe...\n";
    }
    void dormir() {
        cout << "Esta persona duerme...\n";
    }
};

int main() {
    Humano h1;
    
    h1.nombre = "Juan";
    h1.cargo = "Profesor";
    h1.edad = 15;

    h1.beber();
    h1.comer();
    h1.dormir();
    
    return 0;
}

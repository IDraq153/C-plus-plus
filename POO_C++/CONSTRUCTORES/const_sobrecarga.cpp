#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

class Persona {
    private:
        string_t nombre;
        string_t apellido;
        int edad;

    public:
        Persona(string_t nombre, string_t apellido) {
            this->nombre = nombre;
            this->apellido = apellido;
            this->edad = 0;
        }
        Persona(string_t nombre, string_t apellido, int edad) {
            this->nombre = nombre;
            this->apellido = apellido;
            this->edad = edad;
        }

        void mostrarInfo() {
            cout << this->nombre << std::endl;
            cout << this->apellido << std::endl;
            cout << this->edad << std::endl;
        }
};

int main() {
    Persona p1 ("Juan", "Rojas");
    Persona p2 ("Juan", "Rojas", 18);
    p1.mostrarInfo();
    p2.mostrarInfo();
    return 0;
}
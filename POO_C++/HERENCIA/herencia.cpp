#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

class Empleado {
    protected:
        string_t nombre;
        string_t apellido;
        string_t cargo;
        int edad;
    
    public:
        Empleado(string_t nombre, string_t apellido, string_t cargo, int edad) {
            this->nombre = nombre;
            this->apellido = apellido;
            this->cargo = cargo;
            this->edad = edad;
        }
        
        string_t mostrarInfo() {
            return "Nombre: " + this->nombre + "\nApellido: " + this->apellido + "\nCargo: " + this->cargo + "\nEdad: " + std::to_string(this->edad) + "\n";
        }

        string_t getNombre() { return this->nombre; }
        string_t getApellido() { return this->apellido; }
        string_t getCargo() { return this->cargo; }
        int getEdad() { return this->edad; }

        void setNombre(string_t nombre) { this->nombre = nombre; }
        void setApellido(string_t apellido) { this->apellido = apellido; }
        void setCargo(string_t cargo) { this->cargo = cargo; }
        void setEdad(int edad) { this->edad = edad; }
};

class Cocinero : public Empleado{
    private:
        int aniosExp;

    public:
        //CONSTRUCTOR HEREDADO
        Cocinero(string_t nombre, string_t apellido, string_t cargo, int edad, int aniosExp) : Empleado(nombre, apellido, cargo , edad) {
            this->aniosExp = aniosExp;
        }

        int getAniosExp() { return this->aniosExp; }
        void setAniosExp(int aniosExp) { this->aniosExp = aniosExp; }
};

class Recepcionista : public Empleado{};      

int main() {
    Cocinero chef1 ("Juan", "Perez", "Cocinero", 30, 5);
    Cocinero chef2 ("Maria", "Gomez", "Cocinero", 28, 3);

    cout << chef1.mostrarInfo() << "Años de experiencia: " << chef1.getAniosExp() << "\n";
    cout << "-----------------" << std::endl;

    cout << chef2.mostrarInfo() << "Años de experiencia: " << chef2.getAniosExp() << "\n";
    cout << "-----------------" << std::endl;
    return 0;
}
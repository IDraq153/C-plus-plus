#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

class Animal {
    private:
        string_t nombre;
        string_t color;
        int edad;

    public:
        //CONSTRUCTOR
        Animal(string_t nombre, string_t color, int edad){
            this->nombre = nombre;
            this->color = color;
            this->edad = edad;
        }

        //GETTERS && SETTERS
        string_t getNombre() { return this->nombre; }
        string_t getColor() { return this->color; }
        int getEdad() { return this->edad; }
        
        void setNombre(string_t nombre) { this->nombre = nombre; }
        void setColor(string_t color) { this->color = color; }
        void setEdad(int edad) { this->edad = edad; }
};

int main() {
    Animal gato ("Piedra", "Gris", 6);
    cout << gato.getNombre() << std::endl;    
    cout << gato.getColor() << std::endl;    
    cout << gato.getEdad() << std::endl;    
    gato.setNombre("Tinora");
    cout << gato.getNombre() << std::endl;    

    return 0;
}
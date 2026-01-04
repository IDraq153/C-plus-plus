|

class Animal {
    private:
        string_t raza;
        string_t pais;
        int edad;
    
    //CONSTRUCTOR
    public:
    Animal(string_t raza, string_t pais, int edad) {
        this->raza = raza;
        this->pais = pais;
        this->edad = edad;
    }

    void mostrarInfo() {
        cout << "Raza: " << this->raza << std::endl;
        cout << "Pais: " << this->pais << std::endl;
        cout << "Edad: " << this->edad << std::endl;
    }
};

int main() {
    Animal a1 ("Chiguagua", "Peru", 15);
    a1.mostrarInfo();
    return 0;
}
#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

//SE PUEDE CAMBIAR POR NUMEROS O CARACTERES
enum Dia {lunes = 1, martes = 2, miercoles = 3, jueves = 4, viernes = 5, sabado = 6, domingo = 7};

int main() {
    //TRABAJAR CON SWITCH SOLO PERMITE NUMEROS INT O CARACTERES CHAR
    Dia hoy = lunes;
    
    switch (hoy) {
    case 1: cout << "Hoy es lunes";
        break;
    case 2: cout << "Hoy es martes";
        break;
    case 3: cout << "Hoy es miercoles";
        break;
    case 4: cout << "Hoy es jueves";
        break;
    case 5: cout << "Hoy es viernes";
        break;
    case 6: cout << "Hoy es sabado";
        break;
    case 7: cout << "Hoy es domingo";
        break;
    default: cout << "Error";
        break;
    }
    return 0;
}
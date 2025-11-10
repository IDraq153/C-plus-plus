#include <iostream>
#include <vector>
//AYUDA CON LA LECTURA Y REDUCE ERRORES ORTOGRAFICOS
//typedef std::vector<std::pair<std::string,int>> pair_list_t; //le damos un apodo
// el nuevo identificador tiene que terminar con _t

//typedef std::string text_t;
//typedef int numero_t;

//OTRA FORMA SIMILAR MAS USADA
using text_t = std::string;
using numero_t = int;

int main() {
    using std::cout;
    numero_t edad = 19;
    text_t nombre = "Dario";
    cout<<"Hola soy "<<nombre<< " Tengo "<<edad<<" años"<<std::endl;
    return 0;
}
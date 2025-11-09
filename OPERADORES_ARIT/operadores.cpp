#include <iostream>

int main(){
    using std::cout;

    //INCREMENTAR
    int estudiantes = 20;
    //estudiants = estudiantes + 1
    estudiantes+=1;
    cout<<estudiantes<<"\n";

    //DECREMENTAR
    int perros = 10;
    perros-=2;
    cout<<perros<<"\n";

    //MULTIPLICAION
    estudiantes *= 2;
    cout<<estudiantes<<"\n";
    
    //DIVISION 
    estudiantes/=2;
    cout<<estudiantes<<"\n";

    //MODULO
    int modulo = 20%3;
    cout <<"Tu resto: "<< modulo;

    //RECORDAR QUE EN OPERACIONES COMPLEJAS DEBE IR EN PARENTESIS
    //PARA QUE SE RESPETE EL ORDEN DE OPERACION (3+3)/2 != 3+3/2
    return 0;
}
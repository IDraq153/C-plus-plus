#include <iostream>
#include <ctime>

//metodo sizeof(); ver el tamaño de la variable que ocupa en la memoria
using std::cout;
using std::cin;

char eleccionComputadora();

char eleccionPersona();

void quienGana(char compu, char persona); 

int main() {
    cout << "ROCA--PAPEL--TIJERAS \n";
    char person = eleccionPersona();
    char compu = eleccionComputadora();
    quienGana(compu,person);

    return 0;
}

char eleccionComputadora() {
    srand(time(NULL));
    int i = rand() % 3 + 1; //1, 2, 3
    switch (i) {
    case 1:
        cout << "La computadora eligio roca \n";
        return 'r';
    case 2:
        cout << "La computadora eligio papel \n";
        return 'p';
    case 3: 
        cout << "La computadora eligio tijera \n";
        return 't';
    }
}

char eleccionPersona() {
    char p;
    cout << "QUE VA ELEGIR (r / p / t): ";
    cin >> p;
    return p;
}

void quienGana(char compu, char persona) {
    switch (compu) {
    case 'r':
        if (persona == 'r') {cout << "EMPATE";}
        else if (persona == 'p'){cout << "WIN";}
        else if (persona == 't'){cout << "PERDIO";}
        break;
    case 'p':    
        if (persona == 'r') {cout << "PERDIO";}
        else if (persona == 'p'){cout << "EMPATE";}
        else if (persona == 't'){cout << "WIN";}
        break;
    case 't':    
        if (persona == 'r') {cout << "WIN";}
        else if (persona == 'p'){cout << "PERDIO";}
        else if (persona == 't'){cout << "EMPATE";}
        break;
    }
}

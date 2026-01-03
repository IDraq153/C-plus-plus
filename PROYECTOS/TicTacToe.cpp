#include <iostream>
#include <ctime>

using std::cout;
using std::cin;

void dibujarTablero(char *espacios);
void turnoJugador(char *espacios, char jugador);
void turnoBot(char *espacios, char bot);
bool verificarWin(char *espacios, char bot, char jugador);

int main() {
    char espacios[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char jugador = 'X';
    char bot = 'O';
    bool ejecucion = true;
    bool empate = false;

    dibujarTablero(espacios);
    
    while (ejecucion) {
        
        turnoJugador(espacios, jugador);
        dibujarTablero(espacios);
        ejecucion = verificarWin(espacios, bot, jugador);

        if (ejecucion == false) {
            cout << "FELICIDADES USTED GANO!";
            break;
        }
        
        turnoBot(espacios, bot);
        dibujarTablero(espacios);
        ejecucion = verificarWin(espacios, bot, jugador); 
        
        if (ejecucion == false) {
            cout << "PERDIO CONTRA LA MAQUINA";
            break;
        }
    }
    
    return 0;
}

void dibujarTablero(char *espacios) {
    cout << '\n';
    cout << "\t  " << espacios[0] << " |  " << espacios[1] << "  | " << espacios[2] << "  \n";
    cout << "\t____|_____|____"<< std::endl;
    cout << "\t    |     |    "<< std::endl;
    cout << "\t  " << espacios[3] << " |  " << espacios[4] << "  | " << espacios[5] << "  \n";
    cout << "\t____|_____|____"<< std::endl;
    cout << "\t    |     |    "<< std::endl;
    cout << "\t  " << espacios[6] << " |  " << espacios[7] << "  | " << espacios[8] << "  \n";
}

void turnoJugador(char *espacios, char jugador) {
    int num;
    do {
        cout << "INGRESE UN NUMERO PARA SU CASILLA: ";
        cin >> num;
        num--;
        
        if (espacios[num] == ' ') {
            espacios[num] = jugador;
            break;
        }
    } while (!num > 0 || !num < 8);    
}

void turnoBot(char *espacios, char bot) {
    int num;
    srand(time(0));
    
    while (true) {
        num = rand() % 9;
        if (espacios[num] == ' ') {
            espacios[num] = bot;
            break;
        }
    }    
}

bool verificarWin(char *espacios, char bot, char jugador) {
    if (espacios[0] == jugador && espacios[1] == jugador && espacios[2] == jugador) {
        return false;
    } else if (espacios[3] == jugador && espacios[4] == jugador && espacios[5] == jugador) {
        return false;
    } else if (espacios[6] == jugador && espacios[7] == jugador && espacios[8] == jugador) {
        return false;
    } else if (espacios[0] == jugador && espacios[3] == jugador && espacios[6] == jugador) {
        return false;
    } else if (espacios[1] == jugador && espacios[4] == jugador && espacios[7] == jugador) {
        return false;
    } else if (espacios[2] == jugador && espacios[4] == jugador && espacios[8] == jugador) {
        return false;
    } else if (espacios[0] == jugador && espacios[4] == jugador && espacios[8] == jugador) {
        return false;
    } else if (espacios[2] == jugador && espacios[4] == jugador && espacios[6] == jugador) {
        return false;
    } else if (espacios[0] == bot && espacios[1] == bot && espacios[2] == bot) {
        return false;
    } else if (espacios[3] == bot && espacios[4] == bot && espacios[5] == bot) {
        return false;
    } else if (espacios[6] == bot && espacios[7] == bot && espacios[8] == bot) {
        return false;
    } else if (espacios[0] == bot && espacios[3] == bot && espacios[6] == bot) {
        return false;
    } else if (espacios[1] == bot && espacios[4] == bot && espacios[7] == bot) {
        return false;
    } else if (espacios[2] == bot && espacios[4] == bot && espacios[8] == bot) {
        return false;
    } else if (espacios[0] == bot && espacios[4] == bot && espacios[8] == bot) {
        return false;
    } else if (espacios[2] == bot && espacios[4] == bot && espacios[6] == bot) {
        return false;
    } else {
        return true;
    }
}
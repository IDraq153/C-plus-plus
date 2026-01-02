#include <iostream> 
using std::cout;
using std::cin;
using string_t = std::string;

int main() {
    string_t preguntas[] = 
    {"1.¿QUIEN FUE EL CORONEL LEONCIO PRADO?", 
    "2.¿4 x 4?", 
    "3.YA PERO ¿ERES O NO ERES?"};

    string_t opciones[][3] = 
    {{"A. Fue mi pn", "B. Nose"},
    {"A. Camioneta", "B. 16"}, 
    {"A. No", "B. Apaga tu camara"}};

    char respuestas[] = {'A','A','B'};
    char respuesta;

    for (int i = 0; i < sizeof(preguntas)/sizeof(string_t); i++) {
        cout << "**************************\n";
        cout << preguntas[i] << "\n";
        cout << "--------------------------\n";

        for (int j = 0; j < sizeof(opciones[i])/sizeof(opciones[0][i]); j++) {
            cout << opciones[i][j] << "\n";
        }     
        cin >> respuesta;
        respuesta = toupper(respuesta);
        if (respuesta == respuestas[i]) {
            cout << "CORRECTO \n";
        } else {
            cout << "INCORRECTO \n";
            cout << "RESPUESTA CORRECTA: " << respuestas[i] << std::endl;
        }
    }

    return 0;
}

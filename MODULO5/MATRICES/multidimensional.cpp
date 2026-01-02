#include <iostream>
using string_t = std::string;
using std::cout;

int main() {
    //ACA COMO YA DEFINIMOS LAS FILAS SOLO TENDREMOS QUE DEFINIR LAS COLUMNAS
    string_t autos[][3] = {{"TOYOTA", "FORD", "BWW"}, 
                            {"MISUSU", "VOLK", "KIA"}, 
                            {"PALT", "NON", "MIN"}};
                            
    int filas = sizeof(autos) / sizeof(autos[0]);
    int columnas = sizeof(autos[0]) / sizeof(autos[0][0]);

    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << autos[i][j] << " ";
        }
        cout << "\n";        
    }
    
    return 0;
}
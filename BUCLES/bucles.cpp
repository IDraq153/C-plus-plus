#include <iostream>
using std::cout;

int main() {

    cout << "CICLOS CON FOR \n";
    //FOR 
    cout << "Contar del 1 al 10 \n";
    for (int i = 0; i <= 10; i++) {
        cout << i << " ";
    }
    cout << "\n";
    //FOR PERO CON EXCEPTO
    for (int i = 0; i <= 10; i++) {
        if (i == 3) continue; // Este no
        cout << i << " ";
    }
    cout << "\n";
    //FOR CON BREAK
    for (int i = 0; i < 10; i++) {
        if (i == 4) break;
        cout << i << " ";
    }
    
    cout << "\n CICLOS CON WHILE \n";
    //WHILE
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    //WHILE CON CONTINUE
    cout << "\n WHILE CON CONTINUE \n";
    int h = 1;
    while (h <= 5) {
        if (h == 3) {
            h++; 
            continue;
        }
        cout << h << " ";
        h++; 
    }
    
    cout << "\n DO WHILE \n";
    //WHILE CON BREAK O CONTINUE ES IGUAL
    int x = 1;
    do {
        cout << x << " ";
        x++;
    } while (x <= 5);
    //De igual forma se puede usar el continue o break
    
    return 0;
}
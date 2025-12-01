#include <iostream>
using std::cout;

int main() {
    // ? remplazo de la declaracion if
    // condicion ? exp1 : expo2
    int num = 6;
    num % 2 ? cout << "Es par" : cout << "Es impar";

    cout << "\n";

    bool hambre = true;
    hambre ? cout << "Tienes hambre" : cout << "Ya comiste";

    return 0;
}
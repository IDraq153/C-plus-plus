#include <iostream>
using std::cout;

int main() {
    //CONVERSION IMPLICITA
    int y = 3.14;
    cout << y << std::endl;

    //CONVERSION A ENTERO EXPLICITA
    double x = (int) 3.14;
    cout << x;

    return 0;
}
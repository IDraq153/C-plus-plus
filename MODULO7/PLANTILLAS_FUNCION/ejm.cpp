#include <iostream>

//ES COMO SOBRECARGA DE FUNCIONES PERO SON MUCHAS
/*int max(int x, int y) {
    return (x > y) ? x : y;
}
double max(double x, double y) {
    return (x > y) ? x : y;
}*/
//LAS PLANTILLAS
template <typename T>
T max (T x, T y) {
    return (x > y) ? x : y;
}

template <typename U, typename I>
auto min(I x, U y) {
    return (x < y) ? x : y;
}

int main() {
    std::cout << max(1.4,5.3) << '\n';
    std::cout << max('1','3') << '\n';
    
    std::cout << min(0.8,1) << '\n';
    return 0;
}
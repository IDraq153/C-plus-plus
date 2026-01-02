#include <iostream>

using std::cout;
using std::cin;
using string_t = std::string;

int main() {
    const int lon = 5;
    string_t arrayText[lon];
    string_t temp;

    string_t element;
    for (int i = 0; i < lon; i++) {
        cout << "ADD ELEMENT TO YOUR ARRAY #" << (i + 1) << ": ";
        std::getline(cin, temp); 
        
        if (temp == "s") {
            cout << "\n" << "SALIDO EXITOSAMENTE"; 
            break;
        } else {
            arrayText[i] = temp;
        }
    }    
    
    //SI NO ESTA VACIO SE SIGUE EJECUTANDO
    cout << std::endl;
    cout << "YOUR FAVORITE FOODS \n";
    for(int i = 0; !arrayText[i].empty(); i++) { 
        cout << arrayText[i] << " "; 
    }
    
    return 0;
}
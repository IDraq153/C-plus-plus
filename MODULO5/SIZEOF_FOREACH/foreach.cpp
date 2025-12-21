#include <iostream>
using std::cout;
using string_t = std::string;

int main() {
    string_t students[] = {"maria","jose","pedro"};
    int longi = sizeof(students)/sizeof(string_t);
    for (string_t i : students) { cout << i << "\n";}    
    return 0;
}
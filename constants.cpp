// constants can't be modified
#include <iostream>

int main(){
    const double PI = 3.14159; // add const in the starting to make it a constant. Also normally constants have all caps variable names (recommended not required)
    // trying to change the value below will give an error now
    // PI = 38293847384; // someone might change the value of it and make the answer wrong so you want to make it constant
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm" << "\n";

    return 0;
}
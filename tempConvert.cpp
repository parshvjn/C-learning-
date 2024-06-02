#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "***** Temp Convertion ****\n";
    std::cout << "F = Fahrenheit\n" << "C = Celsius\n";
    std::cout << "Unit?";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temp in C: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C'||unit == 'c'){
        std::cout << "Enter the temp in F: ";
        std::cin >> temp;

        temp = (temp - 32)/1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please enter only C/F\n";
    }

    std::cout << "**************************\n";

    return 0;
}
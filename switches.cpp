#include <iostream>

int main(){
    int month;
    std::cout << "Enter the month (1-3): ";
    std::cin >> month;

    switch(month){ // this checks the variable for many cases
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is Feb";
            break;
        case 3:
            std::cout << "It is March";
            break;
        default: // when none cases true
            std::cout << "Please enter only numbers (1-3)";
    }

    return 0;
}
#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**************CALCULATOR**************\n";

    std::cout << "Enter either (+ - * /): " << "\n";
    std::cin >> op;

    std::cout << "Enter #1: " << "\n";
    std::cin >> num1;

    std::cout << "Enter #2: " << "\n";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << "\n";
            break;
        default:
            std::cout << "That was not a valid operation" << "\n";
            break;
    }

    std::cout << "**************************************";

    return 0;
}
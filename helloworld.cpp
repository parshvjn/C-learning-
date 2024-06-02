#include <iostream> // gives basic functionality like inputs/outputs

// you ahve to add ; after every line
int main(){
    std::cout << "hello world" << std::endl; //std = standard, cout means character output, << means output and then put a string for what output you want
    std::cout << "Hola" << std::endl; // the std::endl makes it so that the next text will be on the next line instead of the same
    std::cout << "Bonjour" << '\n'; // doing this also ends the line and is better performance wise but the std::endl flushes the output buffer
    return 0; // if the program returns 0 then it means the code was succesfull
}

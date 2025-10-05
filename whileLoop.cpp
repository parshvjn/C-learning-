#include <iostream>

int main(){
    std::string name;
    while (name.empty() || name.at(0) == ' '){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';

    return 0;
}
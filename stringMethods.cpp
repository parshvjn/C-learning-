#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.length()<< '\n';
    std::cout << name.empty()<< '\n';
    // name.clear();
    name.append(" is better :).");
    std::cout << name << '\n';
    std::cout << name.at(2) << '\n'; // takes character at specific index (remember it starts at 0 not 1 like python)

    return 0;
}
#include <iostream>

/*
Important note:
cout << (insertion operator)
cin >> (extraction operator)
*/


int main()
{
    std::string name;
    int age;

    std::cout << "What's your name?: ";
    std::cin >> name; //taking input and storing it in the variable "name"
    std::cout << "What's your age?";
    std::cin >> age;
    
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    
    // one problem is that with the code above, when you press space(when entering the value in the terminal), the code stops reading the string, so if you entered Parshv Jain, it would just read it as Parshv
    // so to use spaces do this:
    std::cout << "What's your full name?: " << '\n';
    std::getline(std::cin >> std::ws, name); // this asks the input and allows spaces, the std::ws removes white spaces in the output buffer before this line because otherwise the input will just take in a new line character that came from a previous "cin" or input you did. (only happens if you used cin before)
    std::cout << "Hello " << name << '\n';

    return 0;
}
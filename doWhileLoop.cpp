#include <iostream>

int main()
{
    int number;

    // exmple: the while loop won't work as the condition on the while loop won't be true as nunmber doesn't have a value it will never go in there and ask for the number
    // while(number < 0){
    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number;
    // }
    // do while loop method (it says that do the code once and if the condition is true and do it again):

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }
    while (number < 0);

    std::cout << "The # is: " << number;
    return 0;
}
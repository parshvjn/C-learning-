#include <iostream>

int main()
{
    int students = 20;
    // students = students +1;
    students+=1; // does same thing as above
    students++; // only adds one
    std::cout << students << '\n';
    // same thing for all operators (*/-)
    //also when dividing the integer it will remove the decimal part unless you make the variable "students" a double

    int remainder = students % 3;
    
    std::cout << remainder << '\n';

    // order of solving is the same (parenthesis, * /, - +)

    return 0;
}
#include <iostream>

int main(){

    int x; // declaring the variable
    x = 5; // assigning the variable
    int y = 4; // you can also instantly assign the variable, but assiging later is for when you don't know the value yet like for input
    int z = x+y;
    std::cout << z << '\n';

    //integers (whole number)
    int age = 21;
    int year = 20;
    int days = 7.5;
    std::cout << days << '\n'; // this will give 7 instead of 7.5 as i stored it in an integer

    // double (number including decimal)
    double price = 10.99;

    // single char
    char grade = 'A'; // have to use single quotes!
    char initial = 'BC'; // will give error and only show the last char as it is suppsoed to be only one
    std::cout << grade << '\n';

    //boolean(true or false)
    bool student = true;

    // string (objects that represents a sequence of text)
    std::string name = "Parshv"; // in double quotes !
    std::cout << name << '\n';


    std::cout << "Hello " << name << ". How are you?" << '\n'; // combining text with variables

    std::cout << initial;

    return 0;
    // there are more datatypes too...
}
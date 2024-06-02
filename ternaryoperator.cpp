#include <iostream>

int main(){

    // condition ? expression1(if condition true) : expression2(if condition false)

    int grade = 75;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    bool hungry = false;

    hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    //another way of writing the above:
    std::cout << (hungry ? "You are hungry" : "you are full");

    return 0;
}
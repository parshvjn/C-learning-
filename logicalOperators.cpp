#include <iostream>

int main(){

    // && = if both conditions are true (and)
    //|| = if atleast one is true (or)
    // ! = reverses the logical state of its operand (like in python, basicly opposite)

    int temp;

    std::cout << "Enter the temp: ";
    std::cin >> temp;

    bool sunny = true;

    if(temp >= 0 && temp <=30 || temp == 1000){
        std::cout << "Temp is good";
    }
    else{
        std::cout << "The temp is bad";
    }

    if(!sunny){//if sunny is not true
        std::cout << "it is sunny";
    }

    return 0;
}
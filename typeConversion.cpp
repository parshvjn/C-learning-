#include <iostream>

/* 
2 ways of doing this:
Implicit = automatic
Explicit = Precede value with new data type, ex: (datatype)variable
*/

int main()
{

    int x = 3.14;
    double y = (int) 3.14; // this converts 3.14 into an int (using the explicit way) and then storing it to y so y =3
    std::cout << x; // gives 3 not the decimal as it is an int rn

    char z = 100; // will become d as in the ascii table, 100 is d (this is implicitly converting)

    std::cout << z;

    // that  can be written explicitly just like below:
    std::cout << (char) 100;

    return 0;
}
#include <iostream>
#include <cmath>

int main()
{
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x,y);
    z = std::min(x,y);
    // you need cmath for the below:
    z = pow(2,3);
    z = sqrt(9);
    z = abs(-3);
    z = round(x);
    z = ceil(x); //rounding up
    z = floor(x); //rounding down


    std::cout << z;

    return 0;
}

// all cmath functions: https://cplusplus.com/reference/cmath/
#include <iostream>

// int main(){
//     int x = 0;
//     int x = 1; // this will give error as i can't use same variable name, which is why we use namespaces
//     return 0;
// }

namespace first{
    int x = 123123;
}
namespace second{
    int x = 2;
}
int main(){
    // using namespace first; // you can use this line so that you don't have to specify the namespaces but only for the one you named, you still have to specify for other  namespaces like second
    // using namespace std; // this makes it so that you don't always have to say std:: for things like declaring a string or outputs
    //although using the line above can give a lot of name conflicts because there are a lot of variables in it and naming your variables with things like "data" will be conflicted as it is in the std namespace, so you can use for example the line below:
    using std::cout;
    using std::string;

    int x = 0;

    cout << x << '\n'; // if you don't specify the namespace it will use the local one
    cout << first::x << '\n'; // adding the namespace name and then ::variable name it will use the namespace

    return 0;
}


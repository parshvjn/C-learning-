#include <iostream>
#include <vector> // new one!

// typedef std::vector<std::pair<std::string, int>> pairlist_t // typdef used to make an alias for something, in this case it is a datatype for a pair list (just an example, don't need to know the datatype), so i won't have to repeat the whole code but isntead just say pairlist_t. also the identifiers using typedef are normally ending with "_t" just as a convention
// typedef std::string text_t;
// typedef int number_t;

//although typedef works, we should use "using" as it works better with templates
using text_t = std::string;
using number_t = int;

int main(){

    // pairlist_t pairlist; //using the new name, this variable uses the data type declared earlier
    text_t firstName = "Parshv";

    std::cout << firstName << '\n';

    number_t age = 13;
    std::cout << age << '\n';

    return 0;
}
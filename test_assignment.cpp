#include "arrays.h"

/*This code is written exclusively for educational purposes as a test assignment
 for a tester position in school of developer Heads x Hands*/

int main() {

    std::cout << "Enter the number n - size of array of arrays" << '\n';
    int n = 0;
    std::cin >> n;

    //It is impossible to create an array of negative length, so we stop the program.

    if (n < 0){
        std::cout  << "The number has to be positive" << '\n';
        return 1;
    }

    //First you need to generate an array consisting of other arrays

    std::vector<std::vector<int>> arrays;
    arrays =  generate_array_of_arrays(n);

    //Secondly, sort the internal arrays

    sort(arrays, n);

    //Finally print the resulting array consisting of arrays

    print_array(arrays, n);

    return 0;
}

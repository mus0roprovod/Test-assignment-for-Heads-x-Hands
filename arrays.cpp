//
// Created by musoroprovod on 06.10.23.
//
#include "arrays.h"

std::vector<std::vector<int>>  generate_array_of_arrays(int n){
    std::vector<std::vector<int>> result;
    std::unordered_set<unsigned int> sizes;

    //information from https://learn.microsoft.com/ru-ru/cpp/standard-library/random?view=msvc-170

    std::random_device rd;  // non-deterministic generator
    std::mt19937 gen(rd()); // to seed mersenne twister.
                            // replace the call to rd() with a
                            // constant value to get repeatable
                            // results.

    /*The next line is responsible for the maximum length of the array.
    I don't have a very strong computer, so the maximum value is 200.
    If desired, you can allocate more, if RAM allows. */

    std::uniform_int_distribution<int> length(1, 200);

    //Generating unique values for array sizes.

    while (sizes.size() < n){
        sizes.insert(length(gen));
    }

    //Filling the array with random values.

    for(auto k : sizes){
        result.emplace_back(k);
        for (auto& j : result.back()){
            j = static_cast<int>(gen());
        }
    }

    return result;
}

void sort (std::vector<std::vector<int>>& array, int n){

    //Using the function std::sort to sort the arrays.

    for (int i = 0; i < n; ++i){

        /*Using the ternary operator to fulfill the condition that
        the array should be sorted in ascending
        order at even positions, and in descending order at odd positions.*/

            std::sort(array[i].begin(), array[i].end(), i % 2 == 0
            ? [](int first, int second){ // Using lambda functions for comparators.
                return first < second;
            } : [](int first, int second){
                return first > second;
            });

    }
}

//A standard function for outputting a two-dimensional array.

void print_array(std::vector<std::vector<int>>& array, int n){
    for (int i = 0; i < n; ++i){
        std::cout << "[ " << i << " ] = ";
        for (int j : array[i]){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
}

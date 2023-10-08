//
// Created by musoroprovod on 06.10.23.
//

#include <vector>
#include <random>
#include <algorithm>
#include <iostream>
#include <unordered_set> //Used to store unique array lengths

#ifndef HEADSXHANDSTEST_ARRAYS_H
#define HEADSXHANDSTEST_ARRAYS_H

std::vector<std::vector<int>> generate_array_of_arrays(int);
void sort (std::vector<std::vector<int>>&, int);
void print_array(std::vector<std::vector<int>>&, int);

#endif //HEADSXHANDSTEST_ARRAYS_H

#include <iostream>
#include <vector>
#include "SGIAllocator.hpp"
#include <random>

int main() {
    std::mt19937 gen;

    std::uniform_int_distribution<int> dist(1, 100);

    std::vector<int,SGIAllocator<int>> vec;

    for (int i = 0 ; i < 10 ; i++) {
        vec.push_back(dist(gen));
    }

    for (int i = 0 ; i < vec.size() ; i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include "SGIAllocator.hpp"
#include <random>

int main() {
    std::mt19937 gen;

    std::uniform_int_distribution<int> dist(1, 100);

    std::vector<int,SGIAllocator<int>> vec;

    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();

    for (int i = 0 ; i < 100000000; i++) {
        vec.emplace_back(10);
    }
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::chrono::duration<double> time = end - start;
    std::cout << time.count() << std::endl;
    return 0;
}
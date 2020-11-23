#include <iostream>
#include "r.hh"
#include "../pp.hh"


int main() {
    auto v = generateRandomVector(10, 10, 20);
    std::cout << v << "\n";

    v = generateSortedVector(10, 10);
    std::cout << v << "\n";
}

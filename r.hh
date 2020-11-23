#pragma once
#include <vector>
#include <random>

int getRandomInt(const int lo, const int hi, std::mt19937& gen) {
    std::uniform_int_distribution<> dist(lo, hi);
    return dist(gen);
}


std::vector<int> generateRandomVector(int n, int low, int high, int seed = 42) {
    std::mt19937 gen(seed);
    std::vector<int> res;
    for (int i = 0; i < n; ++i) {
        res.push_back(getRandomInt(low, high, gen));
    }
    return res;
}

std::vector<int> generateSortedVector(int n, int start = 0) {
    std::vector<int> ret;
    for (int i = start; i < n + start; ++i) {
        ret.push_back(i);
    }
    return ret;
}

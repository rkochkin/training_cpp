//
// Created by ksy on 04.09.2021.
//

#include "forloop.h"
#include <iostream>
#include <vector>

using namespace hackerrank;

int ForLoop::run() {
    int a, b;
    std::cin >> a >> b;

    std::vector<std::string> lut = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; ++n) {
        if (n > 9) {
            std::cout << (!(n % 2) ? "even" : "odd");
        } else
            std::cout << lut[n];
        std::cout << std::endl;
    }

    return 0;
}
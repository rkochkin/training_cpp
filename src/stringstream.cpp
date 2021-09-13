//
// Created by ksy on 13.09.2021.
//

#include <vector>
#include <sstream>
#include <iostream>
#include "stringstream.h"

using namespace hackerrank;

std::vector<int> StringStream::parseInts(std::string str) {
    // Complete this function
    int num;
    std::stringstream ss(str);
    int cnt=0;
    std::vector<int> vec;

    while (ss){
        int val;
        char ch = ',';
        ss >> val >> ch;
        vec.push_back(val);
    }

    return vec;
}

std::string StringStream::name() const {
    return "string stream";
}

int StringStream::run() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }

    return 0;
}

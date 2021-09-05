//
// Created by ksy on 04.09.2021.
//

#include "conditionalstatements.h"

using namespace hackerrank;

std::string ConditionalStatements::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string ConditionalStatements::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(std::ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}

int ConditionalStatements::run() {
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here

    std::vector<std::string>  lut = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n>9) {
        std::cout << "Greater than 9";
    }
    else
        std::cout << lut[n];
    return 0;
}
std::string ConditionalStatements::name() const {
    return "conditional statements";
}

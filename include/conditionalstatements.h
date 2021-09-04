//
// Created by ksy on 04.09.2021.
// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#ifndef TRAINING_CPP_CONDITIONALSTATEMENTS_H
#define TRAINING_CPP_CONDITIONALSTATEMENTS_H

#include <bits/stdc++.h>
#include "app.h"

namespace hackerrank {
    class ConditionalStatements : public App {
    public:
        int run() override;

    private:
        std::string ltrim(const std::string &str);
        std::string rtrim(const std::string &str);
    };
}

#endif//TRAINING_CPP_CONDITIONALSTATEMENTS_H

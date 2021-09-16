//
// Created by ksy on 16.09.2021.
// https://www.hackerrank.com/challenges/prettyprint/problem

#ifndef TRAINING_CPP_PRINTPRETTY_H
#define TRAINING_CPP_PRINTPRETTY_H

#include "app.h"

namespace hackerrank {
    class PrintPretty : public App {
    public:
        [[nodiscard]] std::string name() const override;

        int run() override;
    };
}

#endif //TRAINING_CPP_PRINTPRETTY_H

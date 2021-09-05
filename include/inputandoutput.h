//
// Created by ksy on 04.09.2021.
// https://www.hackerrank.com/challenges/cpp-input-and-output/problem

#ifndef TRAINING_CPP_INPUTANDOUTPUT_H
#define TRAINING_CPP_INPUTANDOUTPUT_H

#include "app.h"

namespace hackerrank {
    class InputAndOutput : public App {
    public:
        [[nodiscard]] std::string name() const override;
        int run() override;
    };
}

#endif//TRAINING_CPP_INPUTANDOUTPUT_H

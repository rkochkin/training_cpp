//
// Created by ksy on 04.09.2021.
// https://www.hackerrank.com/challenges/cpp-hello-world/problem

#ifndef TRAINING_CPP_HELLOWORLD_H
#define TRAINING_CPP_HELLOWORLD_H

#include "app.h"

namespace hackerrank {
    class HelloWorld : public App {
    public:
        [[nodiscard]] std::string name() const override;
        int run() override;
    };
}

#endif//TRAINING_CPP_HELLOWORLD_H

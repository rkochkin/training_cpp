//
// Created by ksy on 17.09.2021.
// https://www.hackerrank.com/challenges/deque-stl/problem

#ifndef TRAINING_CPP_DEQUESTL_H
#define TRAINING_CPP_DEQUESTL_H

#include "app.h"

namespace hackerrank {
    class DequeStl : public App {
    public:
        [[nodiscard]] std::string name() const override;

        int run() override;
    };
}


#endif //TRAINING_CPP_DEQUESTL_H

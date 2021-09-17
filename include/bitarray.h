//
// Created by ksy on 17.09.2021.
// https://www.hackerrank.com/challenges/bitset-1/problem
// Used Floyd's tortoise and hare algorithm

#ifndef TRAINING_CPP_BITARRAY_H
#define TRAINING_CPP_BITARRAY_H

#include "app.h"

namespace hackerrank {
    class BitArray : public App{
    public:
        [[nodiscard]] std::string name() const override;

        int run() override;
    };
}

#endif //TRAINING_CPP_BITARRAY_H

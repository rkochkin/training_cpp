//
// Created by ksy on 13.09.2021.
// https://www.hackerrank.com/challenges/box-it/problem

#ifndef TRAINING_CPP_BOXIT_H
#define TRAINING_CPP_BOXIT_H

#include "app.h"
namespace hackerrank {
    class BoxIt : public App{
    public:
        [[nodiscard]] std::string name() const override;

        int run() override;
    };
}

#endif //TRAINING_CPP_BOXIT_H

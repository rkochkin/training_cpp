//
// Created by ksy on 17.09.2021.
// https://www.hackerrank.com/challenges/magic-spells/problem

#ifndef TRAINING_CPP_MAGICSPELLS_H
#define TRAINING_CPP_MAGICSPELLS_H

#include "app.h"

namespace hackerrank {
    class MagicSpells : public App {
    public:
        [[nodiscard]] std::string name() const override;

        int run() override;
    };
}


#endif //TRAINING_CPP_MAGICSPELLS_H

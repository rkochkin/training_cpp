//
// Created by ksy on 05.09.2021.
//

#ifndef TRAINING_CPP_VARIABLESIZEDARRAYS_H
#define TRAINING_CPP_VARIABLESIZEDARRAYS_H

#include "app.h"

namespace hackerrank{
    class VariableSizedArrays : public App{
    public:
        [[nodiscard]] std::string name() const override;
        int run() override;
    };
}

#endif//TRAINING_CPP_VARIABLESIZEDARRAYS_H

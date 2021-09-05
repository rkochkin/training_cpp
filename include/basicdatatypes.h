//
// Created by ksy on 04.09.2021.
//

#ifndef TRAINING_CPP_BASICDATATYPES_H
#define TRAINING_CPP_BASICDATATYPES_H

#include "app.h"
namespace hackerrank {
    class BasicDataTypes : public App {
    public:
        [[nodiscard]] std::string name() const override;
        int run() override;
    };
}

#endif//TRAINING_CPP_BASICDATATYPES_H

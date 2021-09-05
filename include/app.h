//
// Created by ksy on 04.09.2021.
//

#ifndef TRAINING_CPP_APP_H
#define TRAINING_CPP_APP_H

#include <string>

class App {
public:
    [[nodiscard]] virtual std::string name() const = 0;
    virtual int run() = 0;
private:
};

#endif//TRAINING_CPP_APP_H

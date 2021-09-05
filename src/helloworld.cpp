//
// Created by ksy on 04.09.2021.
//
#include <iostream>
#include "helloworld.h"

using namespace hackerrank;

int HelloWorld::run() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

std::string HelloWorld::name() const {
    return "Hello world";
}

//
// Created by ksy on 13.09.2021.
//

#ifndef TRAINING_CPP_STRINGSTREAM_H
#define TRAINING_CPP_STRINGSTREAM_H

#include "app.h"

namespace hackerrank{
    class StringStream : public App{
    public:
        [[nodiscard]] std::string name() const override;

        int run() override;

    private:
        [[nodiscard]] static std::vector<int> parseInts(std::string str);
    };
}

#endif //TRAINING_CPP_STRINGSTREAM_H

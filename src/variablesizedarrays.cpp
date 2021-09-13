//
// Created by ksy on 05.09.2021.
//

#include "variablesizedarrays.h"
#include <iostream>
#include <vector>

using namespace hackerrank;

int VariableSizedArrays::run() {

    int arrayNum;
    int queryNum;
    std::cin >> arrayNum >> queryNum;
    std::vector<std::vector<int>> array(arrayNum);
    std::vector<int> resultVector(queryNum);

    for (int i=0; i<arrayNum; ++i){
        int numElement;
        std::cin >> numElement;
        array[i].resize(numElement);
        for (int j=0; j<numElement; ++j){
            std::cin >> array[i][j];
        }
    }

    for (int i=0; i<queryNum; ++i){
        int queryArrayIndex;
        int queryElementIndex;
        std::cin >> queryArrayIndex >> queryElementIndex;
        resultVector[i] = array[queryArrayIndex][queryElementIndex];
    }

    for (int res : resultVector){
        std::cout << res << std::endl;
    }

    return 0;
}
std::string VariableSizedArrays::name() const {
    return "Variable Sized Arrays";
}

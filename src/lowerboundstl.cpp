//
// Created by ksy on 14.09.2021.
//

#include <vector>
#include <iostream>
#include "lowerboundstl.h"

using namespace std;

std::string hackerrank::LowerBoundStl::name() const {
    return "Lower Bound-STL";
}

int hackerrank::LowerBoundStl::run() {
    int arrayNum;
    vector<int> vec;

    cin >> arrayNum;
    for (int i=0; i < arrayNum; ++i){
        int val;
        cin >> val;
        vec.push_back(val);
    }

    int queryNum;

    cin >> queryNum;
    for (int i=0; i < queryNum; ++i){
        int val;
        cin >> val;

        auto low = lower_bound(vec.begin(), vec.end(), val);
        if (vec[low - vec.begin()] == val)
            cout << "Yes " << (low - vec.begin()+1) << endl;
        else
            cout << "No " << (low - vec.begin()+1) << endl;
    }

    return 0;
}

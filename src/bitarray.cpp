//
// Created by ksy on 17.09.2021.
//

#include "bitarray.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


std::string hackerrank::BitArray::name() const {
    return "Bit Array";
}

inline static unsigned int startValue(unsigned int s) {
    return (s & 0x7FFFFFFFU);
}

inline static unsigned int func(unsigned int x, unsigned int p, unsigned int q) {
    return static_cast<unsigned int>((
            static_cast<unsigned long long>(x)
            * static_cast<unsigned long long>(p) + static_cast<unsigned long long>(q)) & 0x7FFFFFFFU);
}

int hackerrank::BitArray::run() {

    unsigned int n, s, p, q;
    std::cin >> n >> s >> p >> q;

    unsigned int x0 = startValue(s);
    unsigned int tortoise = func(x0, p, q);
    unsigned int hare = func(func(x0, p, q), p, q);

    for (int i=1; tortoise != hare; i+=2){
        if (i >= n) {
            std::cout << n;
            return 0;
        }
        tortoise = func(tortoise, p, q);
        hare = func(func(hare, p, q), p, q);
    }
    unsigned int mu=0;
    tortoise = x0;
    while (tortoise != hare){
        tortoise = func(tortoise, p, q);
        hare = func(hare, p,q);
        ++mu;
    }
    unsigned int lam=0;
    hare = func(tortoise, p,q);
    while (tortoise != hare){
        hare = func(hare, p, q);
        ++lam;
    }
    std::cout << lam+mu+1;
    return 0;
}

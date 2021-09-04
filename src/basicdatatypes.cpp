//
// Created by ksy on 04.09.2021.
//

#include <iostream>
#include <cstdio>

#include "basicdatatypes.h"

using namespace hackerrank;

int BasicDataTypes::run() {
    int a;
    long int b;
    char c;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a,&b,&c,&d,&e);

    printf("%d\n%ld\n%c\n%f\n%lf", a,b,c,d,e);

    return 0;
}
//
// Created by ksy on 16.09.2021.
//

#include "printpretty.h"
#include <iostream>
#include <iomanip>

using namespace std;
using namespace hackerrank;

std::string PrintPretty::name() const {
    return "Print pretty";
}

int PrintPretty::run() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

        /* Enter your code here */
        cout <<setw(0);
        ios state(nullptr);
        state.copyfmt(cout); // save current formatting

        cout << "0x" << hex << nouppercase << static_cast<int>(A)<< endl;
        cout.copyfmt(state); // restore previous formatting

        cout << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;
        cout.copyfmt(state); // restore previous formatting

        cout << scientific <<  setprecision(9) << C << endl;
    }
    return 0;
}

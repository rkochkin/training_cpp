//
// Created by ksy on 13.09.2021.
//

#include "boxit.h"
#include<bits/stdc++.h>

using namespace std;

//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    int l;
    int b;
    int h;
public:
    Box() : l{}, b{}, h{} {

    }

    Box(int l, int b, int h) : l{l}, b{b}, h{h} {

    }

    Box(const Box &box) {
        *this = box;
    }

    [[nodiscard]] int getLength() const { // Return box's length
        return l;
    }

    [[nodiscard]] int getBreadth() const { // Return box's breadth
        return b;
    }

    [[nodiscard]] int getHeight() const {  //Return box's height
        return h;
    }

    [[nodiscard]] long long CalculateVolume() const { // Return the volume of the box
        return (long long )l * b * h;
    }

    //Overload operator < as specified
    bool operator<(Box &b) {
        bool ret;
        if (this->l < b.l) ret = true;
        else if (this->b < b.b && this->l == b.l) ret = true;
        else if (this->h < b.h && this->b == b.b && this->l == b.l) ret = true;
        else ret = false;

        return ret;
    }

//Overload operator << as specified
    friend ostream& operator<<(ostream& out, Box& B){
        out << B.l << " " << B.b << " " << B.h ;
        return out;
    }


};


std::string hackerrank::BoxIt::name() const {
    return "Box It!";
}

void check2() {
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            cout << temp << endl;
        }
        if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp) {
                cout << "Lesser\n";
            } else {
                cout << "Greater\n";
            }
        }
        if (type == 4) {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5) {
            Box NewBox(temp);
            cout << NewBox << endl;
        }

    }
}

int hackerrank::BoxIt::run() {
    check2();
    return 0;
}

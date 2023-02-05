//  FeetInches.cpp
#include<iostream>
#include "FeetInches.h"
using namespace std;

FeetInches::FeetInches() {
    feet = 0;
    inches = 0;
    return;
}

int FeetInches::getFeet() const {
    return feet;
}

int FeetInches::getInches() const {
    return inches;
}

void FeetInches::simplify() {
    feet = feet + inches / 12;
    inches %= 12;
}

FeetInches::FeetInches(int f, int i) {
    feet = f;
    inches = i;
    simplify();
}

void FeetInches::setData(int f, int i) {
    feet = f;
    inches = i;
    simplify();
}

FeetInches FeetInches::add(const FeetInches& f) const {
    

    /*
     Here's how you'd use this:
        FeetInches orig_height(5, 10);
        FeetInches extension(2, 3);
        FeetInches total = orig_height.add(extension);
    */
    
    FeetInches temp;
    temp.setData(feet + f.getFeet(), inches + f.getInches());
    return temp;
}

void FeetInches::read(istream& ins) {
    ins >> feet >> inches;
    simplify();
}

void FeetInches::write(ostream& os) {
    os << feet << " " << inches;
}

istream& operator >> (istream& ins, FeetInches& f) {
    f.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, FeetInches f) {
    f.write(outs);
    return outs;
}

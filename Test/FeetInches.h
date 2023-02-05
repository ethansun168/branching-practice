#ifndef FeetInches_h
#define FeetInches_h

#include <iostream>
using namespace std;

class FeetInches {
public:
    /**
    * Requires: Nothing.
    * Modifies: feet, inches.
    * Effects:  Default constructor.
    */
    FeetInches();

    /**
    * Requires: f >= 0 and i >= 0
    * Modifies: feet, inches
    * Effects:  Non-default constructor. Sets feet, inches,
    *           to the simplified values of f, i
    */
    FeetInches(int f, int i);

    /**
    * Requires: Nothing.
    * Modifies: Nothing.
    * Effects:  Returns feet.
    */
    int getFeet() const;

    /**
    * Requires: Nothing.
    * Modifies: Nothing.
    * Effects:  Returns inches.
    */
    int getInches() const;

    /**
    * Requires: f >= 0 and i >= 0
    * Modifies: feet, inches.
    * Effects:  Sets feet and inches,
    *           to the simplified values of f, i
    */
    void setData(int f, int i);

    /**
    * Requires: Nothing
    * Modifies: Nothing
    * Effects : Returns a new instance of
    *           FeetInches where feet, inches
    *           are the simplified sum of feet,
    *           inches of the parameter f
    *           and the calling class object.
    */
    FeetInches add(const FeetInches& f) const;

    /**
    * Requires: ins is in good state.
    * Modifies: ins, feet, inches.
    * Effects:  Reads FeetInches in form
    *           feet inches, and simplifies
    *           values of feet, inches.
    */
    void read(istream& ins);

    /**
    * Requires: outs is in good state.
    * Modifies: outs.
    * Effects:  Writes FeetInches in form
    *           feet inches
    */
    void write(ostream& outs);

private:
    int feet;
    int inches;

    /**
    * Requires: Nothing
    * Modifies: feet, inches
    * Effects : Simplifies feet, inches to
    *           equal total length, where
    *           inches >=0 && inches < 12
    *           Note: 12 inches equals 1 foot
    *
    * Example:  feet, inches = 5, 14
    *           becomes feet, inches = 6, 2
    */
    void simplify();

};

istream& operator >> (istream& ins, FeetInches& f);
ostream& operator<< (ostream& outs, FeetInches f);

#endif

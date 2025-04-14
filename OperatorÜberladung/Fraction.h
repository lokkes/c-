#ifndef FRAC
#define FRAC
#include <iostream>

class Fraction{
private:

long Nominator;
long Denominator; 

public:

//constructor
Fraction();
Fraction(int nom, int denom);

long gcf(long first, long second);

//operator overloading with friend function
Fraction operator+(const Fraction& second);
friend std::ostream& operator<<(std::ostream& os,const Fraction& fc);
double getnom(){return Nominator;}
double getdnom(){return Denominator;}

};

#endif
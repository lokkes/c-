#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int nom, int denom){
Nominator = nom;
Denominator = denom;
}

Fraction::Fraction(){
    Nominator=0;
    Denominator=1;
}

long Fraction::gcf(long First, long Second) {
    // Handle negative numbers by taking absolute values
    First = First < 0 ? -First : First;
    Second = Second < 0 ? -Second : Second;
    // Handle the case where one number is 0
    if (First == 0) return Second;
    if (Second == 0) return First;
    // Euclidean algorithm
    while (Second != 0) {
        long temp = Second;
        Second = First % Second;
        First = temp;
    }
    return First;
}

Fraction Fraction::operator+(const Fraction& second){
long Factor = gcf(this->Denominator, second.Denominator);
long malti1 = Denominator/Factor;
long malti2 = second.Denominator/Factor;
long NumRes = Nominator*malti2 + second.Nominator*malti1;
long DenumRes = Denominator*malti2;
return Fraction(NumRes,DenumRes);  

}

std::ostream& operator<<(std::ostream& os,const Fraction& fc){

os << fc.Nominator << "/" << fc.Denominator;
return os;

}



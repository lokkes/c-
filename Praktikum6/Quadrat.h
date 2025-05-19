#ifndef QUAD
#define QUAD

#include "Figur.h"

class Quadrat: public Figur{
private: 

int length;

public:

Quadrat(int l){
    length = l;
}
    double flache()  {
        
       return length*length; 

    }
};
#endif
#ifndef KREIS
#define KREIS

#include "Figur.h"

class Kreis: public Figur{
private:  

int radius;

public:

Kreis(int r){

    radius = r;

}
    double umfang() {
        
       return 2*3.14*radius;

    }

    friend std::ostream& operator<<(std::ostream& os, Kreis k){

            os << k.umfang();
            return os;
    }
};

#endif
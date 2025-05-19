#ifndef KREIS
#define KREIS

#include "Figur.h"
using namespace std;

class Kreis: public Figur{
private:  

int radius;

public:

Kreis(int r){

    radius = r;

}

    double flache(){
        return 3.14*radius*radius;
    }

    double umfang() {
        
       return 2*3.14*radius;

    }

    friend std::ostream& operator<<(std::ostream& os, Kreis& k){

            os << "Kreis_flache : " << k.flache() << "  " << "Kreis_umfang : " << k.umfang() << endl;
            return os;
    }
};

#endif
#ifndef QUAD
#define QUAD

#include "Figur.h"
using namespace std;

class Quadrat: public Figur{
private: 

int length;

public:

Quadrat(int l){
    length = l;
}
    double flache(){
        
       return length*length; 

    }

    double umfang()  {
        return 4 * (length*length);
    }

    friend std::ostream& operator<<(std::ostream& os, Quadrat& q){

            os << "Quadrat_Flache : " << q.flache() << "  " << "Quadrat_Umfang : " << q.umfang() << endl;
            return os;

    }
};
#endif
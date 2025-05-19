#ifndef RECHT
#define RECHT

#include "Figur.h"

using namespace std;


class Rechteck : public Figur{
private: 

int length;
int width; 

public:

Rechteck(int l, int w){

    length = l;
    width = w;

}
    double flache(){

       return length*width; 

    }

     double umfang(){
        return 2 * (length + width);
    }

    friend std::ostream& operator<<(std::ostream&os,Rechteck& r ){

        os << "Rechteck_Flache : " << r.flache() << "  " << "Rechteck_Umfang : " << r.umfang() << endl;
        return os;
    }


};

#endif
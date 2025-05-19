#include <iostream>
#include <cstdlib>
#include "Figur.h"
#include "Rechteck.h"
#include "Quadrat.h"
#include "Kreis.h"


using namespace std;

int main(int argc, char*argv[]){

    Rechteck r(4, 5);
    Quadrat q(3);
    Kreis k(2);

    Figur* ptr[] = {&r, &q, &k};

    r.flache();
    double quad = q.flache();
    k.umfang();

    cout << "Recheckfläche : " << r << "  " << "Quadrat : " << quad << "  " << "Kreis : " << k <<  endl; 
   
    

    return 0;
}
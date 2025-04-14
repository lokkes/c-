#include <iostream>
#include <cmath>

#include "Fraction.h"

using namespace std;

int main(int argc, char*argv[]){

    Fraction FA(1,2);
    Fraction FB(1,4);
    Fraction FC = FA + FB; 
    cout << FC << endl;

    return 0;
}
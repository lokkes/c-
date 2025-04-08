#include <iostream>
#include <cmath>
#include "person.h"
#include "Date.h"

using namespace std;

int main(int argc, char*argv[]){

    if(argc!=6){cerr << "usage" argv[0] << "<Day> <Month> <Year>" << endl; exit(1);}

    int d = atoi(argv[3]);
    int m = atoi(argv[4]);
    int y = atoi(argv[5]);

    Person P(argv[1], argv[2],d,m,y);
    P.show(cout): cout << endl;

    date today;
    p.setBirthdate(today.getday(), today.getmon(), today.getyear());

    p.show(cout); cout << endl;
    
    return 0;
}
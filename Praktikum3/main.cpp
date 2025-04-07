#include <iostream>
#include <iomanip>
#include <cmath>

#include "rectangle.h"

using namespace std;


int main(int argc, char* argv[]){

    if(argc!=5){
    cout << "Enter Length, width, posx and poy as parameter" << endl;
    }
  
   
    int length = atoi(argv[1]);
    int width = atoi(argv[2]);
    int px = atoi(argv[3]);
    int py = atoi(argv[4]);

     // object initialisation 
    rectangle rect(length, width, px, py);

    cout << "Rectangle : " << "a : " << length << "  "<< "b : " << width  << "  " << "posx :" << px  << "  " << "posy : " << py   << "  "<< endl;
    cout << "Area : " << rect.area() <<  endl;
    cout << "Circumstance : " << rect.umfang() <<  endl;

    cout << endl;

    for (int j = 1; j <=rect.gety(); j++){


        for(int i = 1; i<=rect.getx(); i++){

            cout << "0";

        }
           cout <<  endl;
           int i = 1;
    }

    cout << endl;







    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
#include "rectangle.h"


using namespace std;


rectangle::rectangle(int length, int width, int px, int py){

       a = length;
       b = width;
       posx =px;
       posy = py;
}

int rectangle::area(){ return a*b;}
int rectangle::umfang(){return 2*(a+b);}
int rectangle::getx(){return a;}
int rectangle::gety(){return b;}
int rectangle::getposx(){return posx;}
int rectangle::getposy(){return posy;}

void rectangle::printinfo(){

    cout << "Rectangle : " << "a : " << getx()
    << "  "<< "b :  " << gety()<< " " << "posx :" << getposx()
    << "  " << "posy : " << getposy()   << "  "<< endl;
    cout << "Area : " << area() <<  endl;
    cout << "Circumstance : " << umfang() <<  endl;

}

void rectangle::draw(){

for(int row = 1; row<=getposx(); row++)
{
    cout << " "<< endl;
}
    for (int j = 1; j <= gety(); j++){

        for(int colm = 1; colm<=getposy(); colm++){

            cout << "   ";

                for(int i = 1; i<=getx(); i++){

                    cout << "0";

                    }

                    cout <<  endl;
                    int i = 1;
                    colm+=getposy();

    }
    
    }
    
    cout << endl;
}

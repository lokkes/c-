#include <iostream>
#include <iomanip>
#include <cmath>

#include "rectangle.h"

using namespace std;


int main(int argc, char* argv[]){

    if(argc!=5){
    cout << "Enter Length, width, posx and poy as parameter" << endl;
    return 1;
    }
  
    cout << endl;
    int length = atoi(argv[1]);
    int width = atoi(argv[2]);
    int px = atoi(argv[3]);
    int py = atoi(argv[4]);

    // object initialisation 
    rectangle rect(length, width, px, py);
    rect.printinfo();
    rect.draw();

// Now its easy to create as much as objects i want without writing lot of code 

/*   rectangle rect1(5,5,5,5);
    rect1.printinfo();
    rect1.draw(); */





    return 0;
}
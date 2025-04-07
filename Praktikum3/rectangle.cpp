#include "rectangle.h"


rectangle::rectangle(int length, int width, int px, int py){

       a = length;
       b = width;
       posx =px;
       posy = py;
}

int rectangle::area(){ return a*b;}
int rectangle::umfang(){return 2*(a+b);}



#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int divide(int &x, int &y, int & Rest){

cout << "Without const " << endl;
int remainder, q;
Rest = x%y;
q = x/y;
return q;

}

int divide(const int &x, const int& y, int & Rest){

cout << "With const " << endl;
int remainder, quot;
Rest = x%y;
quot = x/y;
return quot;

}

double divide(int x, int y){
int quot = x/y;
int remainder = x%y;
return quot;
    
}

int main(int argc, char *argv[]){

    // konstant 
    int quot, rest;
    int a=10 ,b = 3;

    quot=divide(10,3,rest);
    cout << "quotient :  " << quot << "  " << "rest : " << rest << endl;
    // with const as the a, b are const 

    // variable 
    quot=divide(a,b,rest);
    cout << "quotient :  " << quot << "  " << "rest : " << rest << endl; 
    // C++ prefers the non-const version (int divide(int &x, int &y, int &Rest)) when variables are passed, because it’s less restrictive.

    // ausdruck 
    quot=divide(a+1,b+1,rest);
    cout << "quotient :  " << quot << "  " << "rest : " << rest << endl;

    //a+1 and b+1 are expressions (temporary values), not variables, so they can’t be passed to non-const references.
    //he compiler picks int divide(const int &x, const int &y, int &Rest)
   
    return 0;
}
//"To directly change the value of a variable from a different function, the best way is to pass it as a parameter by reference (using &) to that function."
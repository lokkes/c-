#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int divide(int &x, int &y, int & Rest){

cout << "Without const " << endl;
int remainder, quot;
Rest = x%y;
quot = x/y;
return quot;

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

    // variable 
    
    quot=divide(a,b,rest);
    cout << "quotient :  " << quot << "  " << "rest : " << rest << endl;

    // ausdruck 
    quot=divide(a+1,b+1,rest);
    cout << "quotient :  " << quot << "  " << "rest : " << rest << endl;

    return 0;
}
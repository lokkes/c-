#include <iostream>
#include "string.h"


using namespace std;


int main()
{

    //3 Ovbjecten
  CString M1="Max";
  CString M2("Moritz");
  CString M3;

  
  M3=M1+" und "+M2;//operator +
  cout << "Wilhelm Busch:\n"<< M3<<"\n";
  M1="______________";
  M1[0]='+';
  M1[M1.GetLength()-1]=M1[0];
  cout << M1<<'\n';

  retrun 0;
}
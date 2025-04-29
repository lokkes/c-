#include "string.h"
#include <cstdlib>
#include <iostream>

using namespace std;

//constructors 

CString::CString(){

  Len = 0;
  pBuf = new char[Len+1];
  pBuf[0] = '\0';

}

CString::CString(const char* str){

  Len = strlen(str);
  pBuf = new char[Len+1]; // allocating memory dynamicaly 
  strcpy(pBuf,str);
  
}

// copy constructor 
 CString::CString(const CString& other){

  //pBuf = other.pBuf; // (schallow copie)

  Len = other.Len;
  pBuf = new char[Len + 1];
  strcpy(pBuf,other.pBuf);

}

CString::CString(char C, int n){

  Len = n;
  pBuf = new char[Len+1];
 
      for (int i = 0; i < n; i++){

        pBuf[i] = C;

      }

  pBuf[n] = '\0';


}

CString::~CString(){

  delete[] pBuf;

}

void CString::show(){

    cout << pBuf;

}

char& CString::CIdx(int i){

    return pBuf[i];

}


//operator overloading 

CString&CString::operator=(const CString& other){

if(this!= &other){

  delete [] pBuf;
  Len = other.Len;
  pBuf = new char[Len+1];
  strcpy(pBuf,other.pBuf);

}

  return *this;

}

CString CString::operator+(const char* str){

  int newlen = Len + strlen(str);
  char* tmp = new char[newlen + 1];
  strcpy(tmp,pBuf);
  strcat(tmp,str);
  CString result(tmp);
  delete [] tmp;
  return result;

}

CString CString::operator+(const CString& rsideval){

int length = Len+rsideval.Len;
char* tmp = new char [length+1];
strcpy(tmp,this->pBuf);
strcat(tmp,rsideval.pBuf); 

CString result(tmp);
delete [] tmp;
return result;

}

CString operator+(const char* string, const CString& other){

  int length = other.Len + strlen(string);
  char* temprory = new char[length + 1];
  strcpy(temprory,string);
  strcat(temprory,other.pBuf);

  CString result(temprory);
  delete [] temprory;
  return result;

}


int CString::GetLength()const{
  return Len;
}

char& CString::operator[](int index){
 return pBuf[index];
}

std::ostream& operator<<(std::ostream& os, const CString& obj){
  os << obj.pBuf;
  return os;
}
  






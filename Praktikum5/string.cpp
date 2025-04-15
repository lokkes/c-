#include "string.h"
#include <cstring>

CString::CString(const char* pStr){

   // pBuf = pStr;
   Len = strlen(pStr);
   pbuf = new char[Len + 1];
   strcpy(pBuf,pStr);
}

CString::Cstring(){

    pBuf = NULL;
    Len = 0;

}

CString (const CString& other){
    pBuf = new char[other];
    strcpy(this->pBuf,other);
    this->len = other.len;
}

char& CIdx(int i){
    
}


char& operator+(const CString& strgObj, const char* string){
  return M1.pBuf + string;
}




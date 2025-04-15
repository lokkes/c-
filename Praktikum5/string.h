#ifndef _STRING_
#define _STRING_

class CString
{
  char * pBuf;
  int    Len;

public:

//constructor
  CString ();
  CString (const char* pStr);
  CString (const CString& other);
  CString (char C, int n);

  //destructor
  ~CString();

  void show();
  char& CIdx(int i); // liefert eine Referenz auf das i-te Zeichen
  CString& operator=(const CString& other);

  //operatorenÜberladung
  friend char& operator+(const CString& strgObj, const char* string);
  friend char& operator+(const char* string,const CString& strgObj);
  

};


#endif
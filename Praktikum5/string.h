#ifndef _STRING_
#define _STRING_

#include<iostream>

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
          ~CString();

          //member functions
          void show();
          char& CIdx(int i); // liefert eine Referenz auf das i-te Zeichen
          int GetLength()const; 

          //operator overloading
          CString& operator=(const CString& other);
          CString operator+(const char* str);
          CString operator+(const CString& rsideval);
          friend CString operator+(const char* string, const CString& other);

          // Indexing operator for direct access to characters
          char& operator[](int index);

          // Friend function for printing
          friend std::ostream& operator<<(std::ostream& os, const CString& obj);
        };


#endif
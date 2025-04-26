#include "Person.h"
#include "Date.h"
#include <iostream>
using namespace std;


Person::Person(const char *name, const char*surname, int d, int m, int y){

  strncpy(this->name,name,30);
  strncpy(this->surname,surname,30);

  birthday = Date(d, m, y);

}

Person::Person(const char *name, const char*surname){

    strncpy(this->name,name,30);
    strncpy(this->surname,surname,30);
}

void Person::show(std::ostream& os){

  os << "Name : " << name << surname << endl;
  os << "Birthday :  ";
  birthday.show(os); 
  os << endl;

}

void Person::setBirthday(int d, int m, int y){

    birthday.setDate(d,m,y);
}

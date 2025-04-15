#include "Person.h"
#include "Date.h"

#include <cstring>
#include <iostream>

Person::Person(const char *name, const char*surname, int d, int m, int y){

  strncpy(this->name,name,30);
  strncpy(this->surname,surname,30);

  birthday = Date(d, m, y);

}

Person::Person(const char *name, const char*surname){

    strncpy(this->name,name,30);
    strncpy(this->surname,surname,30);
}

void Person::show(ostream &os){

os << "Name : " << name << surname;
os << "Birthday :  " << birthday.show(os);

}


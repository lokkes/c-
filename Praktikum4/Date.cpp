#include "Date.h"


// constructor defenition 
Date::Date(int d, int m, int y){

  day = d;
  month = m;
  year = y;

}

 void Date::setDate(int d=1, int m = 1, int y = 2001){

   day = d;
   month=m;
   year=y;

 }

void Date::show(ostream& os){

os << day << "/" << month << "/" << year;

}

//nur als bsp 
int Date::getcurrentdate(){
  return day;

int Date::getcurrentmonth(){
return month;
}

int Date::getcurrentyear(){
return year;
}

 






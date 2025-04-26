#include "Date.h"
#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;


// constructor defenition 
Date::Date(int d, int m, int y){

  day = d;
  month = m;
  year = y;

}

// we are anyway not calling this or using this for now just as bsp
Date::Date(){
  day = getcurrentdate();
  month = getcurrentmonth();
  year = getcurrentyear();
}

 void Date::setDate(int d, int m, int y){

  if(d == 1 && m == 11 && y == 2001){

        time_t now = time(0);               // Get current time
        tm *ltm = localtime(&now);           // Convert to local time structure

        day = ltm->tm_mday;                  // Current day
        month = 1 + ltm->tm_mon;              // Current month (tm_mon is 0-based)
        year = 1900 + ltm->tm_year;  

  }

  else{
    day = d;
    month = m;
    year = y;
  }

 }

void Date::show(std::ostream& os)const {
  os << day << "/" << month << "/" << year;
}

//nur als bsp 
 int Date::getcurrentdate(){
   
   time_t date_today = time(0);
   tm *ltm = localtime(&date_today);
   return ltm->tm_mday;

}

int Date::getcurrentmonth(){

   time_t month = time(0);
   tm *ltm = localtime(&month);
   return ltm->tm_mon;
}

int Date::getcurrentyear(){

  time_t year = time(0);
   tm *ltm = localtime(&year);
   return ltm->tm_year;

} 


 






#ifndef DATE
#define DATE

#include <iostream>
#include <iosfwd>


class Date{

    private:

    int day;
    int month;
    int year;
    int getcurrentdate();
    int getcurrentmonth();
    int getcurrentyear();
    

    public:
    //constructor
    Date(int d, int m, int y);
    Date();

    //memberfunktion
    void setDate(int d=1, int m = 11, int y = 2001);
 

    //to print the objects 
    void show(std::ostream& os) const;

    //getter and setter 
    int getday(){return day;}
    int getmonth(){return month;}
    int getyear(){return year;}
   
};



#endif
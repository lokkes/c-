#ifndef DATE
#define DATE

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
    void setDate(int d=1, int m = 1, int y = 2001);

    void show(ostream &os) const;// whats ostream ??

    //getter and setter 
    
    int getday(){return day;}
    int getmon(){return month;}
    int getyear(){return year;}
    
};



#endif
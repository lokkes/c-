//Schaltjahre sind alle durch 4 aber nicht durch 100 teilbaren Jahre
//aber die durch 400 teilbaren Jahre sind wieder Schaltjahre

// ((jahr-1900)*365 + (jahr-1900)/4 + tageDerVollstMonate + Tag)%7 

import java.util.*;

public class DayFinder {

    private int day;
    private int month;
    private int year;


    // setters 
    public void setDay(int d){this.day=d;}
    public void setMonth(int m){this.month=m;}
    public void setYear(int y){this.year=y;}

    // getters 

    public int getDay(){return this.day;}
    public int getMonth(){return this.month;}
    public int getYear(){return this.year;}


    // construtor 

    public DayFinder(){
        setDay(1);
        setMonth(1);
        setYear(1900);
    }

    public DayFinder(int d, int m, int y){
        setDay(d);
        setMonth(m);
        setYear(y);
    }

    public int weekday(){
         // ((jahr-1900)*365 + (jahr-1900)/4 + tageDerVollstMonate + Tag)%7 
       int jahr = this.year;
       int Tag = this.day;
       return ((jahr-1900)*365 + (jahr-1900)/4 + tageDerVollstMonate() + Tag)%7; 
    }

public int tageDerVollstMonate() {
    int tage = 0;
    switch (month) {
        case 12: tage += 30; // November
        case 11: tage += 31; // October
        case 10: tage += 30; // September
        case 9:  tage += 31; // August
        case 8:  tage += 31; // July
        case 7:  tage += 30; // June
        case 6:  tage += 31; // May
        case 5:  tage += 30; // April
        case 4:  tage += 31; // March
        case 3:  tage += isSchaltjahr() ? 29 : 28; // February
        case 2:  tage += 31; // January
        case 1:  break;      // no months before January
    }
    return tage;
}

    public boolean isSchaltjahr() {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

    
        public static void main(String args[]){

            if(args.length != 1 ){
                System.out.println("Error occured");
                System.out.println("Enter the date in the proper Form : Z.B 01.11.2001");
                return;
            }

            String dateString = args[0];
            String []parts = dateString.split("\\.");
            int d = Integer.parseInt(parts[0]);
            int m = Integer.parseInt(parts[1]);
            int y = Integer.parseInt(parts[2]);

            DayFinder date = new DayFinder(d,m,y);
            int actualweekday = date.weekday();

            String weekname = "";


            switch(actualweekday){

                
                case 0: 
                weekname = "sunday";
                break;

                case 1: 
                weekname = "Monday";
                break;

                case 2: 
                weekname = "Tuesday";
                break;

                case 3: 
                weekname = "wednesday";
                break;

                case 4: 
                weekname = "thursday";
                break;

                case 5: 
                weekname = "friday";
                break;

                case 6: 
                weekname = "saturday";
                break;

            }

            System.out.println("es muss ein " +weekname+ " sein");
            
                
                
            }
           

      
        }


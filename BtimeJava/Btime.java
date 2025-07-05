import java.util.*;

public class Btime {

      private int h;
      private int m;

public Btime(){
    Calendar c = Calendar.getInstance();
    this.h =c.get(Calendar.HOUR_OF_DAY);
    this.m = c.get(Calendar.MINUTE);
}

public Btime(int h, int m){

    this.h = h%24;
    this.m = m%60; 
}


   public static void  main(String args[]){

        Btime time = new Btime();
        System.out.println("the current time is : " +time.h+ ":"+time.m);

        Btime time2 = new Btime(10,20);
        System.out.println("The time2 is : "+time2.h+":"+time2.m);
  
    }
   

}

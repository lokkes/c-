import java.lang.*;
import java.util.Scanner;
import java.io.*;

public class Figure {

    public double getCircumference() { return 0; }//overriden 
    public double getArea() { return 0; }// overriden
    public double getHeight() { return 0; }// overriden
    public double getWidth() { return 0; }// overriden
    public String toString() { return "no shape at all"; }

    public static void main(String[] args) {
       System.out.println("Selct one option : ");
       System.out.println("a) Square");
       System.out.println("b) Rectangle");
       System.out.println("c) Circle");
       System.out.print("Enter a, b or c : ");

        Scanner scanner = new Scanner(System.in);
       char userinput = scanner.next().charAt(0);
   /*     System.out.println(userinput); */

       if(userinput == 'a' || userinput == 'b' || userinput == 'c'){
        
            if(userinput == 'a'){

                System.out.print("Enter the Length of the Square : ");
                int input_a = scanner.nextInt();
                Square area = new Square(input_a);
                System.out.println("  " + area.getArea());
                
            }  
           else if(userinput == 'b'){

                System.out.print("Enter the Length : ");
                int len = scanner.nextInt();

                System.out.print("Enter the width : ");
                int wid = scanner.nextInt();

                Rectangle area = new Rectangle(len, wid);
                System.out.println("Area : "+ area.getArea());
                

            }  

            else if(userinput == 'c'){

                System.out.println("Enter the circumference : ");
                double circumference = scanner.nextDouble();
                Circle circle = new Circle(circumference);
                System.out.println("The Radius is : "+circle.toString());

            }

       }

            else{
                System.out.println("xxxxx Invalid Input xxxxx");
            }
    }
}

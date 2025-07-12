

public class Circle extends Figure {
    
    private double circumference;
    private double radius;
    private double pi;
    private double width;
    

    public Circle(double a){

            this.circumference = a;
            this.pi = 3.142857;

    }
    @Override
    public double getArea() {

        double r = getRadius();
        return pi * r * r;
}

    @Override
    public double getWidth() {
    return 2 * getRadius();
}

    @Override
     public double getCircumference() {
         return circumference;
     }

     @Override
    public double getHeight() {
        return 2 * getRadius();
}


     public double getRadius(){
        this.radius = circumference/ (2*pi);
        return this.radius;
     }

     
    @Override 
     public String toString() { 
        return "raidus is " +radius+ " and area "+getArea();
    
    }



}

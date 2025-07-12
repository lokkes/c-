

public class Rectangle extends Figure{

    private double Height;
    private double width;
    private double area;


public Rectangle(int a, int b){
    this.Height = a;
    this.width = b;
}

@Override
public double getHeight() {
    
    return Height;

}

 public double getWidth() {
    return width;
 }


@Override
public double getArea(){

    this.area = width*Height;
    return this.area;
}
}

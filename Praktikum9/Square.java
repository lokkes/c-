
public class Square extends Figure {
    
    private int Sidelength;
    private double area;

    public void setSidelength(int a){
            this.Sidelength = a;
    }

    public int getSidelength(){
        return Sidelength;
    }

    //constructor 
    public Square(int a){

        this.Sidelength = a;

    }

    @Override
    public double getArea() {

        this.area = Sidelength*Sidelength;
        return this.area;
     }


}

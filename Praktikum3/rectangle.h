// class declaration
class rectangle{
   private:
    
        int a;
        int b;
        int posx;
        int posy;

    public:

        //constructor
        rectangle(int length, int width, int px, int py);

        //to calculate Area 
        int area();

        //circumstance 
        int umfang();

        //getter
        int getx(){
            return a;
        }
        int gety(){
            return b;
        }

};
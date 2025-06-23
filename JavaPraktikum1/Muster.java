import java.awt.Button;
import java.awt.Frame;
import java.awt.Panel;


public class Muster extends Panel {

        Button ok;
        Button cancel;

        public Muster(){
            setLayout(null);
            ok = new Button("ok");
            cancel = new Button("cancel");
            this.add(cancel);
            this.add(ok);
            ok.setBounds(1100, 700, 100, 30);
            cancel.setBounds(1000, 700, 100, 30);
            

        }

        public static void main(String args[]){

            Frame F = new Frame();
            Muster P = new Muster();
            F.add(P);
            F.pack();
            F.setSize(400,400);
            F.setVisible(true); 

        }
    
}

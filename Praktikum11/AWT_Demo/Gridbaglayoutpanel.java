package Praktikum11.AWT_Demo;
import java.awt.*;
import java.awt.event.*;

public class Gridbaglayoutpanel extends Panel {

    GridBagConstraints c = new GridBagConstraints();

    Button b1 = new Button("button1");
    Button b2 = new Button("button2");
    Button b3 = new Button("button3");
    Button b4 = new Button("button4");

    Label label = new Label("Eingabe : ");
    TextArea ta = new TextArea(20,100);
    TextField tf = new TextField();

    public Gridbaglayoutpanel(){

        setLayout(new GridBagLayout());

        c.weightx=1.0;
        c.weighty=1.0;
        c.fill=GridBagConstraints.BOTH;

        c.gridx=0;
        c.gridy=0;
        add(label,c);

       c.gridx = 1;
       c.gridwidth = GridBagConstraints.REMAINDER;
       add(ta,c);

       c.gridwidth=GridBagConstraints.REMAINDER;
       c.gridx=0; c.gridy=1;  
       add(tf,c);

       c.gridwidth = 1;
       c.gridy = 2;
       add(b1,c);
       
       c.gridwidth = GridBagConstraints.REMAINDER;
       c.gridx=GridBagConstraints.RELATIVE;
        add(b2,c);
        add(b3,c);
        add(b4,c);
    }

    public static void main(String[] args) {
            Gridbaglayoutpanel gbl = new Gridbaglayoutpanel();
            Frame f = new Frame();

            f.add(gbl,BorderLayout.CENTER);

            f.add(gbl);

            f.addWindowListener(new WindowAdapter(){

                public void windowClosing(WindowEvent e){
                     System.exit(0);
                    }
                }); 
        
            
            f.pack();
            f.setVisible(true);
    }
}   

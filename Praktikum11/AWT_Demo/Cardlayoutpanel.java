package Praktikum11.AWT_Demo;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.EventListener;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Cardlayoutpanel extends Panel implements ActionListener{

    Button b1 = new Button("1");
    Button b2 = new Button("2");
    Button b3 = new Button("3");
    Button b4 = new Button("4");
    CardLayout cards = new CardLayout();

public Cardlayoutpanel(){

      setFont(new Font("System",Font.PLAIN,24));
      setLayout(cards);
      add(b1,("card1"));
      b1.addActionListener(this);
      add(b2,("card2"));
        b2.addActionListener(this);
      add(b2,("card3"));
        b3.addActionListener(this);
      add(b4,("card4"));
        b4.addActionListener(this);

}

public void actionPerformed(ActionEvent e){
        cards.next(this);
}
public static void main(String[] args) {
    Cardlayoutpanel clp = new Cardlayoutpanel();
    Frame f = new Frame();
    f.add(clp);
    f.pack();
    f.setVisible(true);
}

    
}

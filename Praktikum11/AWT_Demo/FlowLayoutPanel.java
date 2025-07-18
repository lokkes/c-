import java.awt.*;
import java.awt.event.*;
import java.util.concurrent.Flow;

public class FlowLayoutPanel extends Panel {

    Button b1 = new Button("NORTH");
    Button b2 = new Button("SOUTH");
    Button b3 = new Button("WEST");
    Button b4 = new Button("EAST");


    public FlowLayoutPanel() {

        setFont(new Font("System", Font.PLAIN, 24));   

        setLayout(new BorderLayout());                 
        setBackground(Color.LIGHT_GRAY);

        add(b1,BorderLayout.NORTH);                                      
        add(b2,BorderLayout.SOUTH);
        add(b3,BorderLayout.WEST);
        add(b4,BorderLayout.EAST);
     /*    add(b1);
        add(b2);
        add(b3);
        add(b4);
 */
    }

    public static void main(String[] args) {
        FlowLayoutPanel flp = new FlowLayoutPanel();
        FlowLayoutPanel flp2 = new FlowLayoutPanel();

        Frame frame = new Frame("FlowLayoutPanel");
        frame.setLayout(new GridLayout());

        frame.add(flp);
        frame.add(flp2);

        flp.setBackground(Color.CYAN);
        flp2.setBackground(Color.black);

        frame.pack();
        frame.setVisible(true);
        
    }
}

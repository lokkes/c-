import java.awt.*;
import java.awt.event.*;

public class Mouse2 extends Panel {

    int posX = 550;
    int posY = 400; 
    String S;

    // Constructor
    public Mouse2(String s) {
        this.S = s;
        addMouseMotionListener(new MyMouseMotionListener());
    }

    // Member class for mouse motion
    class MyMouseMotionListener extends MouseMotionAdapter {
        public void mouseDragged(MouseEvent e) {
            posX = e.getX();
            posY = e.getY();
            repaint(); // Repaint the panel
        }
    }

    // Drawing method
    public void paint(Graphics g) {

      Font font = new Font("serif", Font.PLAIN,30);
      g.setFont(font);

      if(posX < 250 ){
         g.setColor(Color.MAGENTA);
      }

      else if (posX > 250 && posX < 500){
         g.setColor(Color.GREEN);
      }

      else {
         g.setColor(Color.RED);
      }
     
        g.drawString(S, posX, posY);
    }



    // Main method
    public static void main(String[] args) {
        Frame f = new Frame();
        Mouse2 p = new Mouse2(args[0]);
        f.add(p, BorderLayout.CENTER);
        f.setSize(500, 200);
        f.setVisible(true);

        // Close the window on exit
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
    }
}

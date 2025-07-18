import java.awt.*;
import java.io.*;
import java.nio.Buffer;
import java.awt.event.*;




public class AWTFileViewer extends Panel {

    //components 
    Button showbButton = new Button("Show");
    Button quiButton = new Button("Quit");
    Label l = new Label("File : ");
    TextField tf = new TextField(60);
    TextArea ta = new TextArea();
    GridBagConstraints c = new GridBagConstraints();
  

    //constructor 
    public AWTFileViewer (){

        setLayout(new GridBagLayout());

       

        //label
        c.weightx= 0;
        c.weighty = 0;
        c.gridx = 0;
        c.gridy = 0;
        c.anchor=GridBagConstraints.NORTHWEST;
        c.fill = GridBagConstraints.NONE;
        add(l, c);

        //text field 
        c.weightx=2;
        c.weighty=0;
        c.gridx = 1;
        c.gridy = 0;
        c.gridwidth = 1;
        c.fill = GridBagConstraints.RELATIVE;  
        add(tf,c);

       //showbutton
        c.gridx = 2;
        c.gridy = 0;
        c.weighty = 0;  
        c.anchor = GridBagConstraints.NORTHEAST;
        c.fill = GridBagConstraints.NONE;
        add(showbButton,c);

    

        //text area 
        c.gridx = 0;
        c.gridy = 1;
        c.weightx = 1;
        c.weighty = 1;
        c.gridwidth = 3;
        c.anchor = GridBagConstraints.NORTHWEST;
        c.fill = GridBagConstraints.BOTH;   
        add(ta,c);

        //quit button 
        c.gridx = 0;
        c.gridy = 2;
        c.weightx = 0;
        c.weighty = 0;
        quiButton.setPreferredSize(new Dimension(80, 40));
        add(quiButton,c);

         quiButton.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                System.exit(0);
            }
        });

        showbButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){

                String input = tf.getText();
                File f = new File(input);

                try(FileInputStream fis = new FileInputStream(input)){

                byte[] buffer = new byte[1024];
                int bytesread;
                String content = "";

                while((bytesread = fis.read(buffer))!= -1){
                     content = content + new String(buffer, 0,bytesread);

                }
                ta.setText(content);


                }

               catch (IOException ex) {
                ta.setText("Error reading file: " + ex.getMessage());
        }
              

            }


        });


    }

    public static void main(String[] args) {

        AWTFileViewer fileViewer = new AWTFileViewer();

        Frame f = new Frame();
        Panel p = new Panel();

         


        f.add(fileViewer);
         f.setSize(800, 400);
        f.setVisible(true);
    }
}

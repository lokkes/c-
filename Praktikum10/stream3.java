import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.lang.*;
import java.net.URL;
/* import java.net; */

public class stream3 {

    public static void main(String[] args) throws IOException {
        
           /*  URL u = new URL(args[0]); */ // this is the url 
           /*  InputStream is = u.openStream(); */// connection
            File file = new File(args[0]);
            FileInputStream fis = new FileInputStream(args[0]);
            ByteArrayOutputStream baos = new ByteArrayOutputStream(); //connection 
            FileOutputStream os = new FileOutputStream("output.txt");
            
            byte[] buffer = new byte[1024]; // creating array 
            int bytesread; 

            while((bytesread = fis.read(buffer)) != -1){ // if the read byte is not -1 then ..

                baos.write(buffer, 0, bytesread); // write it in the buffer from bytes read 
                
            }

            fis.close();

            String content = baos.toString();
            char[] chararray = content.toCharArray();


             // Step 3: Write char[] using FileWriter
            FileWriter fw = new FileWriter("output.txt");
            fw.write(chararray);  // FileWriter accepts char[]
            fw.close();

            os.close();

           /*  System.out.println(content); */



            



    }
    
}

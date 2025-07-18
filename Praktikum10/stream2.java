import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.*;
import java.net.URL;

public class stream2 {

    public static void main(String[] args) throws IOException {
        
       URL url = new URL(args[0]);
       InputStream is = url.openStream();

       int len = is.available();

        //now i have a variable of filelength 
        byte []filecontent = new byte[(int)len];
   
        //prof version 
        int bytesRead = 0;
        int readNow;

        while (bytesRead < filecontent.length &&
               (readNow = is.read(filecontent, bytesRead, filecontent.length - bytesRead)) != -1) {
            bytesRead += readNow;
        }

        is.close();

        String content = new String(filecontent);
        System.out.println(content);

       
 
    }
    
}



import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.*;

public class stream1 {

    public static void main(String[] args) throws IOException {
        
        // just to fond the length 
        File file = new File(args[0]);
        long filelength = file.length();
     
        //now i have a variable of filelength 
        byte []filecontent = new byte[(int)filelength];
        FileInputStream fis = new FileInputStream(args[0]);

        //prof version 
        int bytesRead = 0;
        int readNow;

        while (bytesRead < filecontent.length &&
               (readNow = fis.read(filecontent, bytesRead, filecontent.length - bytesRead)) != -1) {
            bytesRead += readNow;
        }

        fis.close();

        String content = new String(filecontent);
        System.out.println(content);

       
 
    }
    
}



import java.io.*;
public class Third {
    public void check() throws IOException
    {
      BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
      System.out.print("Enter the Character = ");
      char x=(char)br.read();            
      switch(x)
      {
          case 'a':case 'A':          
          case 'e':case 'E':
          case 'i':case 'I':
          case 'o':case 'O':
          case 'u':case 'U':
             System.out.print("Vowel");
             break;
          default:
             System.out.print("Consonant");
      }
    }
    public static void main(String[] args) throws IOException{
        Third ob =new Third();
        ob.check();
    }
}

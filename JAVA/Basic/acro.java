//acromatic souvik chakraborty --->S.C.
import java.util.Scanner;
class acro
{
    public static void main(String[] as)
    {
        Scanner ob =new Scanner(System.in);
        System.out.print("em=nter the string =");
        String x = ob.nextLine();
        System.out.println(""+x);
        x=" "+x.toUpperCase();
        System.out.println("string ="+x);
        for(int i=0;i<x.length();i++)
        {
            if(x.charAt(i)==' ')
                {
                    System.out.print(x.charAt(i+1)+".");
                }
        }
        
    //ob.close();
    }
}

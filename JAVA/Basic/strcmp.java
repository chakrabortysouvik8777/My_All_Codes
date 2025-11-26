//compare string
import java.util.Scanner;
class strcmp
{
    public static void main (String as[])
    {
        String x,y;
        Scanner ob =new Scanner(System.in);
        System.out.print("Enter the 11stString =");
        x=ob.nextLine();
        System.out.print("Enter the 11stString =");
        y=ob.nextLine();
        if(x.equals(y))
            System.out.println("string matched");

        else
           System.out.print("not matched");
    }
}
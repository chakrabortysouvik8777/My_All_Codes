//wap to check string input and print
import java.util.Scanner;
class str
{
    public static void main(String as[])
    {   String x;
        Scanner ob =new Scanner(System.in);
        System.out.print("Enter the print =");
        x=ob.nextLine();
        System.out.print("string is = "+x.trim()+"length is ="+x.length());



    }
}
import java.util.Scanner;
public class leap{
    public static void main (String sj[])
    {
        int yr;
        Scanner mb = new Scanner(System.in);
        System.out.println("Enter the year = ");
        yr = mb.nextInt();
        if(yr%400==0)
            System.out.println("leap yea!!! ");
        else if(yr%4==0 && yr%100!=0)
            System.out.println("leap year! ");
        else    
            System.out.println("not leap year! ");

        
    }
}
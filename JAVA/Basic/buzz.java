import java.util.Scanner;
public class buzz{
    public static void main (String sj[])
    {
        int n;
        Scanner mb = new Scanner(System.in);
        System.out.println("Enter the number = ");
        n = mb.nextInt();        
        if(n%7==0 || n%10==7)
            System.out.println(n+" buzznumber ");
        else    
            System.out.println("not buzz number ");

        
    }
}
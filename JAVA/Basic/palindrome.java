import java.util.Scanner;

public class palindrome{
    
    public static void main(String[] as)
    {
        int n,x, rem=0,s=0;
        Scanner ob = new Scanner(System.in);
        System.out.println("enter the number = ");
        n=ob.nextInt();
        for (x=n;n>0;n/=10)
        {
            s=(s*10)+n%10;}
            if (s==x)
                System.out.println("palindrome Number"+x);
            else
                System.out.println(" not palindrome Number"+x);
        
    } 
}
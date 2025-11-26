import java.util.Scanner;
public class dissarium{
    public static void main(String[] ag)
    {
       
        int n,x,c=0, rem=0,s=0,p=0;
        Scanner ob = new Scanner(System.in);
        System.out.println("enter the number = ");
        n=ob.nextInt();
        for(x=n;n>0;n/=10)
        {
            c++;
        }
        n=x;
        for(x=n;n>0;n/=10)
        { 
            rem=n%10;
            p=(int)Math.pow((double)rem,(double)c--);
            s=s+p;

        }
        if (s==x)
            System.out.println("dissarium number"+x);
        else
            System.out.println("not dissarium number"+x);
    }
}

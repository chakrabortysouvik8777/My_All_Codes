import java.util.*;
class evil{
String convertBinary(int n)
{
    int r;
    String s="";
    char dig[]={0,1};
    while(n>0)
    {
        r=n%2;
        s+=dig[r];
        n=n/2;
    }
    return s;
}
int countOne(String s)
{
    int i=0,l,c=0;
    l=s.length();
    for(i=0;i<l;i++)
    {
        char ch= s.charAt(i);
        if(ch=='1')
        {
             c++;
        }

    } 
    return c;
}
public static void main (String[] as)
{
    int n;
    evil ob=new evil();
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the number = ");
    n=sc.nextInt();
    String bin = ob.convertBinary(n);
    int x = ob.countOne(bin);
    if (x%2==0)
    {
        System.out.println("evil number"+x);

    }
    else
        System.out.println("not evil number");
}

}
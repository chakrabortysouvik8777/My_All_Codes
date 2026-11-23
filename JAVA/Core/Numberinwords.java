import java.io.*;
class figures
{
    String a[] = {"","one","two","three","four","five","six","seven","eight" , "nine", "ten","eleven", "twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    String pre[]={"and","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety", "hundred"};

    public void hundreds(int n)   //n=956
    {if (n<0)
        {System.out.print ("minus ");
            n=-n;}
        if (n>=100)  
        {
            if((n/100)>0)
                System.out.print(a[(n/100)]+" "+pre[10]+" ");
            if ((n%100)>0)
                System.out.print ("and ");        }
            tNu((n%100));   
 }
    public void tNu(int nn)  //nn=56
    {if(nn<20)
            System.out.println(a[nn]);
        else if ((nn>=20)&&(nn<100)&&((nn%10)!=0))
            System.out.println(pre[(nn/10)]+" "+a[(nn%10)]);
        else if((nn>=20)&&(nn<=100)&&((nn%10)==0))
            System.out.println (pre[nn]);    }

    public static void main(String args[])throws IOException
    {
        BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter a number smaller than 1000 here--->");
        int n=Integer.parseInt(buf.readLine());//956
        System.out.print ("The number in figures is\t: ");
        figures fig=new figures();
        if((n<1000)&&(n!=0))
            fig.hundreds(n);
        else if (n==0)
            System.out.println ("Zero");
        else 
            System.out.println("Invalid Entry");    
    }    
}

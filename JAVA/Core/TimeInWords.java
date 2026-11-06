import java.io.*;
public class TimeInWords_ISC2003
{    
public static void main(String args[])throws IOException
 {
   BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
   System.out.print("Enter Hours : ");
   int h=Integer.parseInt(br.readLine());   //h=7
   System.out.print("Enter Minutes : ");
   int m=Integer.parseInt(br.readLine());  //m=40
   if((h>=1 && h<=12) && (m>=0 && m<=59)) 
   {

   String words[]={"", "One", "Two", "Three", "Four", "Five", "Six","Seven", "Eight", "Nine","Ten",
        "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen",
        "Twenty","Twenty one", "Twenty two", "Twenty three", "Twenty four", "Twenty five",
        "Twenty six","Twenty seven","Twenty eight", "Twenty nine"};
String plu, a;
 if(m == 1 || m == 59)
  plu = "Minute";        
 else
   plu = "Minutes";
 if(h==12)
  a = words[1]; 
 else
  a = words[h+1];//a="Eight" 
  System.out.print("Output : "+h+":"+m+" ----- ");
 if(m==0)
    System.out.println(words[h]+" O' clock");
  else if(m==15)
    System.out.println("Quarter past "+words[h]);
  else if(m==30)
    System.out.println("Half past "+words[h]);
  else if(m==45)
    System.out.println("Quarter to "+a);
  else if(m<30)
   System.out.println(words[m]+" "+plu+" past "+words[h]);
  else
   System.out.println(words[60-m]+" "+plu+" to "+a);      
 }
else
System.out.println("Invalid Input !");
 }
}

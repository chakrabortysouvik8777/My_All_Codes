import java.util.Scanner;
class Password
{  public void checkStrength(String x)
    { int strength=0;
       Boolean capital= false, small= false, specialcharacter = false, digit= false;
         for(int i=0; i<x.length();i++)
         { char a =x.charAt(i);
            if (Character.isUpperCase(a))
            {
                capital= true ;
            } 
            else if(Character.isLowerCase(a))
                small= true;
            else if(Character.isDigit(a))
                digit= true;
            else
                specialcharacter = true ;
         strength = (capital?1:0)+(small?1:0)+(digit?1:0)+(specialcharacter?1:0);


         }
         if(x.length()<4|| strength==1 )
           { System.out.println(x.length()+strength);
             System.out.print("very weak");}
        else if (x.length()<=4||strength==2)
           { System.out.println("WEAK");
            System.out.println(x.length()+" "+strength);}
        else if (x.length()<=8||strength==3)
             {System.out.println("Moderate");
             System.out.println(x.length()+strength);}
        else if (x.length()<=10 || strength==4)
           { System.out.println("Strong");
           System.out.println(x.length()+strength);
           }

    }


    public static void main(String as[])
    {   
        String x;
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter tne password = ");
        x=ob.nextLine();
        Password sc = new Password();
        
        sc.checkStrength(x);
       // sc.close();
    }
}
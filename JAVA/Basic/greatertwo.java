import java.util.Scanner;
class greatertwo{
public static void main(String as []){
int a,b;
Scanner mb = new Scanner(System.in);
System.out.println("Enter the number = ");
a= mb.nextInt();

System.out.println("Enter the number = ");
b=mb.nextInt();
if(a>b)
  System.out.println("1st number is  a greater ");
else if (a==b)
    System.out.println("both equal");
else
    System.out.println("2nd number is  a greater ");
}

}
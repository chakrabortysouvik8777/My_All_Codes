 //wap to check a no. is palidrome or not
#include<stdio.h>
void main()
{
     int n,rem,x,s=0;
     printf("enter the no=");
     scanf("%d",&n);
     for(x=n ;n>0;n=n/10)
     { 
       rem=n%10;
       s=(s*10)+rem;
       n=x;
     }
      if(n==s)
      {
       printf("%d is palindrome number");       
      }   
      else
      {
       printf("%d is not palindrome number");       
      }
      
}
     
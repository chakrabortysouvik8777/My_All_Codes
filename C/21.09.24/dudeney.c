// wap to check whether the number is dudeney number or not.
#include<stdio.h>

int main()
{
 int x, n,rem,s=0;
 printf("Enter The Number =");
 scanf("%d",&n);
 x=n;
 for( ;n>0;n=n/10)
 {
  rem=n%10;
  s=s+rem; 
  n=x;    
 }
 printf("sum is",n);
 
 
 
}

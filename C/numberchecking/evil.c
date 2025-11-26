// wap to check whether the number is evil or not   23,20,18,34
#include<stdio.h>
void main()
{
    int n,c=0,x;
    printf("enter the number = ");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
       if(n%2==1)
        {
            c++;
        }
         n=n/2;
    }
  if(c%2==0)
  printf("%d is evil no.",x) ;
  else
  printf("%d is not evil no.",x) ;
}
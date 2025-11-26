//wap to check whether the number is strong/krishnamurthy/peterson or not   145, 40585
#include<stdio.h>
void main()
{
    int i,f=1,n,s=0,x,rem;
    printf("enter the number =");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    { rem=n%10;
    for(i=1;i<=rem;i++)
    {
        f=f*i;
     }
        s+=f;
        f=1;
    }
    n=x;
    if(n==s)
    printf("strong number");
    else
    printf("not strong number");

}
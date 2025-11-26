//wap to check whether the number is smith or not
#include<stdio.h>
void main()
{
    int i,n,s1=0,r,x,s2=0,p,t,s=0;
    printf("enter the number =");
    scanf("%d",&n);
    for(x=n;n>0;n/=10)
    {
        s1+=n%10;
    }  
    n=x;  
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {   
            s+=i;
        }
    }
    for(x=s;n>0;n/=10)
    {
       s2+=n%10;  
    }  
     if(s1==s2)
    printf(" Smith no");
    else
    printf(" not Smith no");
   printf("\n%d",s2);
   printf("\n%d",s1); 
}
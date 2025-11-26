//wap to check w=whether the number is unique or not
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,c=0,f=0,r,x,y;
    printf("enter the number =");
    scanf("%d",&n);
    x=n;
    y=x; 
    while(n!=0)
    {   c++;
        r=n%10;
        while(x!=0)
        {
            if(r==x%10)
             f++;
        x/=10;     
        }
        x=y;
        n/=10;
    }
    if(f!=c)
    printf("%d is not unique number",y);
    else
    printf("%d is unique number",y);
}
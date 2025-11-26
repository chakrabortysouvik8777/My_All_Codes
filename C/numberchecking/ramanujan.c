//wap to check whether the number is ramanujan or not   189,217,344,370,407,468,520,559
#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n,c=0,p,q;
    printf("enter the number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{    p=pow(i,3);
    for(j=i;j<=n;j++)
    {    q=pow(j,3);
        if(n==p+q)
        {
            c++;
            break;
        }
    }
}
if(c==2)
{printf("%d is ramanujan",n);
printf("\n%d",c);}
else
{printf("%d is not ramanujan",n);
printf("\n%d",c);}
}
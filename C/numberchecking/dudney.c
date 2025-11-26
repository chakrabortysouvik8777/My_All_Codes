//wap to check whether number is dudney or not
#include<stdio.h>
#include<math.h>
void main()
{
    int n,rem,s=0,p=0,x;
    printf("enter the number =");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
        p=pow(s,3);
       
    }
    printf("%d\n",s);
    printf("%d\n",p);
    if (x==p)
    printf(" dudney number");
    else
    printf(" not dudney number");
}

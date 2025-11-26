#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s=0,s1=0,b,j,p;
    
    printf("enter the  range =");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter the  number =");
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    j=s/n;
    for(i=0;i<n;i++)
    {
        b=(a[i]-j)*(a[i]-j);
     s1=s1+b;
     }   s1=s1/(n-1);
        p=pow(s1,0.5);
    printf("%d\n",s);
    printf("%d\n",j);
    printf("%d\n",s1);
    printf("%d",p);
    
     }
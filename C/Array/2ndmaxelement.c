//wap to print second maximum element
#include<stdio.h>
void main()
{
    int i,n,max,smax,j;
    
    printf("enter the  range =");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter the  number =");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]>max)
       { max=a[i];
         j=i;
       }
    }
    smax=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]>smax &&i!=j)
       { smax=a[i];
     int  k=i;
       }
    }
    printf("maximum element =%d\n",max);
    printf("second element =%d",smax);
    }
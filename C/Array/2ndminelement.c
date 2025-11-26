//wap to print second minimum element
#include<stdio.h>
void main()
{
    int i,n,min,smin,j;
    
    printf("enter the  range =");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter the  number =");
        scanf("%d",&a[i]);
    }
    min=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]<min)
       { min=a[i];
         j=i;
       }
    }
    smin=a[0];
    for (i=0;i<n;i++)
    {
        if(a[i]<smin &&i!=j)
       { smin=a[i];
     int  k=i;
       }
    }
    printf("minimum element =%d\n",min);
    printf("second  minimum element =%d",smin);
    }
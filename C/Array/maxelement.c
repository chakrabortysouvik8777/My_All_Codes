//wap to print maximum element
#include<stdio.h>
void main()
{
    int i,n,max;
    
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
     int  j=i;
       }
    }
    printf("maximum element =%d",max);
    
    }
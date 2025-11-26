//wap to print minimum element
#include<stdio.h>
void main()
{
    int i,n,min;
    
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
     int  j=i;
       }
    }
    printf("minimum element =%d",min);
    
    }
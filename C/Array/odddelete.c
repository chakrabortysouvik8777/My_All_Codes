//wap to delete the odd element within an array

#include<stdio.h>
void main()
{
    int i,n;
    
    printf("enter the  range =");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("enter the  number =");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            a[i]=a[i+1];
            i++;
        }
        
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }    
    }
    }
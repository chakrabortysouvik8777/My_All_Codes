//wap to print odd element
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
        printf("value=%d    index=%d\n",a[i],i);
    }
    for (i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        printf(" odd value=%d",a[i]);
    }
}

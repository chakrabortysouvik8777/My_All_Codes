//wap to delete all elemr=ent except middle element within an array
#include<stdio.h>
void main()
{
    int n,i,temp;
    printf("Enter the range =");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the number =");
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if (n%2==0)
        {
            for(i=0;i<n;i++)
            {
                if(i!=n/2)
                {
                    for(int j=i;j<n-1;j++)
                    {
                        a[j]=a[j+1];
                    }
                    n--;
                }
            }
        }
        
        else
        {printf("\nAs the array is even so the middle element can't be found");}
        printf("\n After deletion of middle element=/n");
        for(i=0;i<n;i++){
            printf("%d",a[i]);
        }

    }


}
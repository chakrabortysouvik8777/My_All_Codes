//wap to sort an array using insertion sort
# include <stdio.h>
void main()
{
    int a[10],n;
    int i,j,temp,k,ite=1;
    printf("Enter the Range = ");
    scanf("%d",&n);
    //input
    for (i=0;i<n;i++)
    {
        printf("Enter the Number =");
        scanf("%d",&a[i]);
    }
    //insertion sort
    for(i=1;i<n;i++)
    {
        j=i;
        while ( j>0 && a[j-1]>a[j])
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
      //printing
      printf("Iteration=%d",ite);
      for(k=0;k<n;k++)
      {  printf("%d",a[k]);}
        printf("\n");
        ite++;
      }

}
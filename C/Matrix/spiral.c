//wap to print spiral matrix
#include<stdio.h>
void main()
{
    int i,j,m,n,srow=0,scol=0,erow,ecol;
    printf("Enter the number of row and column= ");
    scanf("%d%d",&m,&n);
    int a[m][n]; 
    erow=m-1;
    ecol=n-1;
    while(srow<=erow && scol<=ecol){
    for(i=scol;i<=ecol;i++)
    {
        printf("Enter the number for (%d,%d) top row = ",srow,i);
        scanf("%d",&a[srow][i]);
    }
    printf("\n");
    for(j=srow+1;j<=erow;j++)
    {
        printf("Enter the number for (%d,%d) right coloumn = ",j,ecol);
        scanf("%d",&a[j][ecol]);
    }
    printf("\n");
    for(i=ecol-1;i>=scol;i--)
    {    if(srow==erow)
         {break;}
        printf("Enter the number for (%d,%d) bottom row = ",erow,i);
        scanf("%d",&a[erow][i]);
    }
    printf("\n");
    for(j=erow-1;j>=srow;j--)
    {      if(srow==j)
            {break;}
        printf("Enter the number for (%d,%d) left coloumn = ",j,scol);
        scanf("%d",&a[j][scol]);
    }
    srow++;
    erow--;
    scol++;
    ecol--;
    }
    printf ("\nspiral matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
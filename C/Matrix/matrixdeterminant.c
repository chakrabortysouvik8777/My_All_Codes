//wap to print the determinant of matrix
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,r,c,k,s=0;
     printf("Enter the number of row and column= ");
    scanf("%d%d",&r,&c);
    int a[r][c],x[(r-1)*(r-1)],q; 
    if(r!=c)
    {
        printf("As the matrix is not square determinant can't be possible" );
        exit(0);
    }
   printf("enter tne no.using'' =");
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        printf("enter tne no.(%d,%d) =",i,j);
        scanf("%d",&a[i][j]);
    }printf("\n");
   }
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        printf("%d",a[i][j]);
    }printf("\n");
   }
    if(r==2)
    {
        printf("solve=%d",a[0][0]*a[1][1]-a[1][0]*a[0][1]);
        exit(0);
    }
    for(k=0;k<r;k++)
    {
        for(i-0,q=0;i<r;i++)
        {
            if(k!=i)
            {
                for(j=0;j<c;j++)
                {
                    if (j!=0)
                     x[q++]=a[i][j];
                }
            }
        }
        if(k==1)
        s-=a[k][0]*(x[0]*x[3]-x[1]*x[2]);
        else
        s+=a[k][0]*(x[0]*x[3]-x[1]*x[2]);
    
    }printf("\n\n solve =\n%d",s);
}
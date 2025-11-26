//wap to addition of 2 matrix
#include <stdio.h>
#define pf printf
#define sf scanf
void main()
{
    int r,c,i,j;
    pf("enter the number of row and column =");
    sf("%d%d",&r,&c);
    int a[r][c],b[r][c],x[r][c];
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            pf("enter the number for 1st matrix= ");
            sf("%d",&a[r][c]);
           pf("enter the number for 2nd matrix= ");
            sf("%d",&b[r][c]);
             
        }
    }
    pf("1st");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            pf("%d",a[i][j]);
        }pf("\n");
    }
    pf("2nd");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            pf("%d",a[i][j]);
        }pf("\n");
    }pf("addition of matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {   x[i][j]=a[i][j]+b[i][j];
            pf("%d",x[i][j]);
        }pf("\n");
    }
    
    }
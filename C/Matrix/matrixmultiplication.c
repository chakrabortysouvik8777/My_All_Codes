//wap to multiply 2 matrix
#include <stdio.h>
#include <math.h>
#define  pf printf
#define  sf scanf
void main()
{
    int i,j,r1,c1,r2,c2,k,s=0,r;
    pf("Enter the no. of rows and coloumn =");
    sf("%d%d%d%d",&r1,&c1,&r2,&c2);
    int ar[r1][c1], br[r2][c2],cr[r1][c2];
    if(c1==r2)
    {
        //input
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                pf("Enter the no. for 1st matrix :");
                sf("%d",&ar[i][j]);
            }
        }pf("\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                pf("Enter the no. for 2nd matrix :");
                sf("%d",&br[i][j]);
            }pf("\n");
        }
        //printing
        pf("1st matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                pf("%d ",ar[i][j]);
            }pf("\n");
        }
        pf("\n");
        pf("2nd matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                pf("%d ",br[i][j]);
            }pf("\n");
        }
        for(i=0;i<r1;i++)
        {
            for(k=0;k<r1;k++)
            {
                for(j=0;j<r2;j++)   
                {
                    if(k==0&&i==0)
                    {
                         r=ar[i][j]*br[i][j];
                    }
                    else
                    {
                   r=ar[i][j]*br[i][k]; 
                    }
                s=s+r;
                }
                cr[i][k]=s;
                s=0;

            }
        }
        pf("Mutiplication of 2 matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++) 
            {
                pf("%d ",cr[i][j]);
            }pf("\n");
        }
    }
     else
     pf("wrong input!!");
}

//wap to check whe the a number is karpekar or not
# include<stdio.h>
# include<math.h>
void main()
{
 int n,x,c=0,p=0,sq;
 printf("Enter the number = ");
 scanf("%d",&n);
 for (x=n;n>0;n=n/10)
 {
    c++;
 }
  p=(int)pow(10,(double)c);
  sq=x*x;
 if((((sq)%p)+((sq)/p))==x && (sq)%p>0)
 printf(" karpekar number");
 else
 printf(" not karpekar number");
 printf("\n%d",sq%p);
printf("\n%d",(x*x)/p);
printf("\n%d",p);
printf("\n%d",sq);
}
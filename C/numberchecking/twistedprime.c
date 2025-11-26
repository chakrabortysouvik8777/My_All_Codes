//wap to check whether the number is twisted prime or not
# include<stdio.h>
void main()
{
int i,n,r=0,c=0,p=0,x;
printf("enter the number =");
scanf("%d",&n);
for (i=2;i<n;i++)
{
    if(n%i==0)
    { c=1;
     break;}
}
for (x=n;n>0;n=n/10)
{
    r=r*10+(n%10);
}

for (i=2;i<r;i++)
{
    if(r%i==0)
    { p=1;
     break;}
}
if(p==0 && c==0)
printf("twisted prime");
else
printf("not");

}
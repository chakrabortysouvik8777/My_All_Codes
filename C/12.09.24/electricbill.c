#include<stdio.h>
void main()
{   int custno;
    float u,amount;
    printf("Enter The Customer Number =");
    scanf("%d",&custno);
    printf("Enter The Unit =");
    scanf("%f",&u);
    if(u>0 && u<=100)
    {
        amount=u*1.5;
    }
    else if(u>100 && u<=200)
    {
        amount=(u-100)*2.5;
    }
    else if(u>200 && u<=400)
    {
        amount=(u-200)*3.5;
    }
    else if(u>400 && u<=800)
    {
        amount=(u-400)*5.5;
    }
    else
    {
        amount=(u-800)*7.5;
    }
    printf("total amount =",amount);
}

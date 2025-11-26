#include<stdio.h>
void main()
{   int custno,call;
    float amt;
    printf("Enter The Customer Number =");
    scanf("%d",&custno);
    printf("Enter The Number of calling =");
    scanf("%d",&custno);
    if(call>0 && call<=100)
    {
        amt=call*1;
    }
    else if(call>100 && call<=200)
    {
        amt=(call-100)*1.75;
    }
    else if(call>200 && call<=400)
    {
        amt=(call-200)*2.50;
    }
    else if(call>400 && call<=800)
    {
        amt=(call-400)*3.75;
    }
    else 
    {
        amt=(call-800)*5.50;
    }
    printf("TOTAL AMOUNT = ",amt);
    getch();
    
}   
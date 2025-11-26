//wap to implement circular queue by using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int cqueue_arr[MAX];
int front = -1, rear= -1;
void insert();
void delete();
void display();
void main()
{
    int choice;
     printf("\npress 1.insert\n2.delete\n3.display\n4.Quit") ; 
     printf("enter the choice= ");
     scanf("%d",&choice); 
    switch(choice)
    {
        case 1:
        insert();
         break;
        case 2:
         delete();
         break;
        case 3:
         display();
         break;
        case 4:
         exit(0);
        default:
         printf("wrong choice !! ");
    } 
    }
void insert()
{
    if((front==0&&rear==MAX-1)||(front==rear+1))
    {
        printf("queue is overflow!!");
        return;
    }
    if(front==-1)
    {front=0;
    rear =0;}
    else{
        if(rear==MAX-1)
        rear=0;
        else
        rear=rear+1;
    }
}

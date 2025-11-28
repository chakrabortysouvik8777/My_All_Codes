//WAP to implement circular queue by using array

#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#define MAX 3

int cqueue_arr[MAX];

int front = -1;

int rear = -1;

void insert(int);

void del();

void display();

int main()

{

  int choice,item;

  do

  {

     printf("1.Insert\n");

     printf("2.Delete\n");

     printf("3.Display\n");

     printf("4.Quit\n");

     printf("Enter your choice : ");

     scanf("%d",&choice);

     switch(choice)

     {

       case 1 :

            printf("Enter the No. = ");

            scanf("%d", &item);//item=40

            insert(item);//calling

            break;

       case 2 :

            del();//calling

            break;

       case 3:

            display();//calling

            break;

       case 4:

           exit(0);

       default:

            printf("Wrong choice\n");

     }

   }while(choice!=4);

  getch();

  return 0;

}

void insert(int item)//item=40

{

   if((front == 0 && rear == MAX-1) || (front == rear+1))

   {

      printf("Queue Overflow \n");

      return;

   }

   if (front == -1)  /*If queue is empty */

   {

     front = 0;

     rear = 0;

   }

   else

   {

     if(rear == MAX-1)	/*rear is at last position of queue */

       rear = 0;

     else

       rear = rear+1;//2

   }

   cqueue_arr[rear] = item ;//cqueue_arr[1]=20

}

void del()

{

  if (front == -1)

  {

    printf("Queue Underflow\n");

    return ;

  }

  printf("Deleted : %d\n",cqueue_arr[front]);

  if(front == rear) /* queue has only one element */ //circular

  {

    front = -1;

    rear=-1;

  }

  else

  {	

    if(front == MAX-1)//circular queue

      front = 0;//circular queue

    else

      front = front+1;//2

  }

}

void display()//func. definition

{

    if (front == - 1 || front>rear)

    {

        printf("Queue is empty \n");

        return;

    }

    else

    {   

        int i;

        printf("Queue is : \n");

        for ( i = front; i <= rear; i++)

            printf("%d ", cqueue_arr[i]);

        printf("\n");

    }

}
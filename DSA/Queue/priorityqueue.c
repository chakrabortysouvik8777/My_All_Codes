//Priority Queue
//wap to implement priority queue using array
#include<stdio.h>
#include<conio.h>
#define MAX 4
void insert_by_priority(int);
void delete_by_priority(int);
void create();
void check(int);
void display_pqueue();
int pri_que[MAX];
int front, rear;
void main()
{
    int n, ch;
    printf("\n1 - Insert an element into queue");
    printf("\n2 - Delete an element from queue");
    printf("\n3 - Display queue elements");
    printf("\n4 - Exit");
    create();//calling
    while (1)
    {
        printf("\nEnter your choice : ");    
        scanf("%d", &ch);//1 3 1 3 1 3 1 3 1 2 3 2 3 1 3 2 3 2 3 2 3 2 4
        switch (ch)
        {
        case 1: 
            printf("\nEnter value to be inserted : ");
            scanf("%d",&n);//n=15 10
            insert_by_priority(n);//calling n=7
            break;
        case 2:
            printf("\nEnter value to delete : ");
            scanf("%d",&n);//n=50
            delete_by_priority(n);//calling n=50
            break;
        case 3: 
            display_pqueue();//calling
            break;
        case 4: 
            exit(0);
        default: 
            printf("\nChoice is incorrect, Enter a correct choice");
        }
    }
   getch();
}
void create()
{
    front = rear = -1;//
}
void insert_by_priority(int data)//data=n  data=15
{
    if (rear >= MAX - 1)//1>=3
    {
        printf("\nQueue overflow no more elements can be inserted");
        return;
    }
    if ((front == -1) && (rear == -1))
    {
        front++;//0
        rear++;//0
        pri_que[rear] = data;//pri_que[0]=10
        return;
    }    
    else
        check(data);//calling n=60
    rear++;//1
}
void check(int data)//data=10
{
    int i,j; 
    for (i = 0; i <= rear; i++)//i=0  2<=1 i++
    {
        if (data >= pri_que[i])//10>=15
        {
            for (j = rear + 1; j > i; j--)//j=3 0>0 j--
            {
                pri_que[j] = pri_que[j - 1];//pri_que[1]=pri_que[0]
            }
            pri_que[i] = data;
            return;
        }
    }
    pri_que[i] = data;//
}
void delete_by_priority(int data)//50
{
    int i;
    if ((front==-1) && (rear==-1))
    {
        printf("\nQueue is empty no elements to delete");
        return;
    }
    for (i = 0; i <= rear; i++)//i=0 0<=0 i++
    {
        if (data == pri_que[i])//40==40
        {
            for (; i < rear; i++)//i=0  0<0 i++
            {
                pri_que[i] = pri_que[i + 1];//pri_que[1]=pri_que[2]
            }
        pri_que[i] = 0;
        rear--;//-1
        if (rear == -1) 
            front = -1;//-1
        return;
        }
    }
    printf("\n%d not found in queue to delete", data);
}
void display_pqueue()
{
    int i;
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }
    for (i=front; i<= rear; i++)//0<=0
    {
        printf(" %d ", pri_que[i]);//40
    }
}
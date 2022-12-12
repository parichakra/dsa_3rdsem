#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int front = -1;
int rear = -1;

int Q[MAX];
void enqueue(int data);
void dequeue();
void traverse();

int main()
{
    int choices, data;
    while (1)
    {
        printf("\nenter your choices:\n1.enqueue\n2.dequeue\n3.traverse\n4.exit\n");
        scanf("%d", &choices);
        switch(choices)
        {
            case 1:
                printf("enter the data: ");
                scanf("%d", &data);
                enqueue(data);
                break;

            case 2:
                dequeue();
                break;
            
            case 3:
                traverse();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid  choices:");
                break;

        }
    }
}


void enqueue(int data)
{
    if((front==0 && rear== MAX-1) || (front==rear+1) ){
        printf("Queue overflow\n");
        return;
    }
    if (rear ==-1 && front== -1)
    {
        front= 0;
        rear=0;
        Q[rear]= data;

    }
    else{
    rear = (rear+ 1)% MAX;
    
    Q[rear]= data;
    }
}

void dequeue()
{
    int data;
    if(rear==-1 && front==-1){
        printf("\n Queue underflow \n");
        return;
    }
    data= Q[front];
    printf("%d\t", data);
    if (rear== front){
        front=-1;
        rear=-1;
    }
    else{
        front= (front+1)%MAX;
    }
}

void traverse()
{
    if(rear==-1 && front==-1){
        printf("\n Queue underflow \n");
        return;
    }
    if(front<rear){
        int i= front;
        for (i= front; i<= rear;i++){
            printf("%d\t", Q[i]);
        }
    }    
    else if (front==rear){
        printf("%d\t", Q[front]);
    } 
    else if(front>rear){
        for (int i= front; i<=MAX-1; i++){
            printf("%d\t", Q[i]);
        }
        for (int i=0; i<=rear; i++){
            printf("%d\t", Q[i]);
        }

    }   
} 

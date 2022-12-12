#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int front = -1;
int rear = -1;

int Q[SIZE];
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
    if(rear == SIZE -1){
        printf("Queue overflow");
        return;
    }
    if (rear ==-1 && front== -1)
    {
        front= 0;
    }
    
    rear = rear+ 1;
    Q[rear]= data;

}

void dequeue()
{
    int data;
    if((rear<front)||(rear==-1 && front==-1)){
        //front =-1;
        //rear =-1;
        printf("\n Queue underflow \n");
        return;
    }
    else{
        data= Q[front];
        printf("%d\t", data);
        return;
    }
    front = front+1;
}

void traverse()
{
     if((rear<front)||(rear==-1 && front==-1)){
        printf("\n Queue underflow \n");
        return;
     }
    int i = front;
    for(i = front; i<=rear; i++){
        printf("%d\t", Q[i]);
    }   
}     

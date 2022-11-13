#include<stdio.h>
#define SIZE 10

int Top = -1;

int stack[SIZE];
void push(int data);
void pop();
void traverse();
void display();

int main()
{
    int choices, data;
    while (1)
    {
        printf("enter your choices:\n1.push\n2.pop\n3.traverse\n4.exit\n");
        scanf("%d", &choices);
        switch(choices)
        {
            case 1:
                printf("enter the data");
                scanf("%d/n", &data);
                push(data);
                break;

            case 2:
                pop();
                break;
            
            case 3:
                traverse();
                break;

            case 4:
                return 0;

            default:
                printf("wrong choices:");
                break;

        }
    }
}


void push(int data)
{
    if(Top == SIZE -1){
        printf("stack is full");
        return;
    }
    else{
        Top ++;
        stack[Top]= data;

    }
}

void pop()
{
    int data;
    if(Top==-1){
        printf("stack is empty");
        return;
    }
    else{
        data= stack[Top];
        printf("the data is %d\n", data);
        Top --;
    }
}

void traverse()
{
    int i = Top;
    for (i=Top; i>=0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

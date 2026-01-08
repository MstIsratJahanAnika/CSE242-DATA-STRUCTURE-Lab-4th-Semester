#include<stdio.h>
#define size 10
int top = -1;
int stack[size];

int isfull()
{
    if(top == size-1)
        return 1;
    else return 0;
}

void push(){
    if(isfull())
    {
        printf("stack overflow");
        return ;
    }
    else{
        int value;
        scanf("%d", &value);
        top++;

        stack[top] = value;
        printf("pushed value : %d\n, stack[top]");
    }
}

int isEmpty()
{
    if(top == -1) return 1;
    else return 0 ;
}

void pop()
{
    if(isEmpty())
    {
        printf("stack overflow");
        return;
    }
    else
    {
        printf("popped value : %d\n", stack[top]);
        top--;                                                                          
    }
}

int peek()
{
    if(isEmpty())
    {
        printf("atack underflow");
    }
    else return stack[top];
}

void display()
{
    int i=0;
    while(i <= top)
    {
        printf("%d",stack[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    int choice = 1;
    printf("|n option 1 : push ");
    printf("\nOption 2: Pop");

    printf("\nOption 3: Peek");

    printf("\nOption 4: IsFull");

    printf("\nOption 5: IsEmpty");

    printf("\nOption 6 : Display\n");

    while(choice <= 6)
    {

        printf("Enter choice: ");

        scanf("%d",&choice);
        switch(choice)

        {

        case 1 :
            push();

            break;

        case 2 :
            pop();

            break;

        case 3 :
            printf("Peeked value: %d\n",peek());

            break;

        case 4 :
            isFull();

            break;

        case 5 :
            isEmpty();

            break;

        case 6 :
            display();

            break;

        default :
            printf("Wrong Option");

            break;

        }

    }

}

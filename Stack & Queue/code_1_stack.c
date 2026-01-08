#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top = -1, input_array[SIZE];
void push();
void pop();
void show();

void push()
{
    int x;
     
    if(top == SIZE-1)
    {
        printf("\noverflow");
    }
    else{
        printf("enter the element to be added onto the stack");
        scanf("%d", &x);
        top++;
        input_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nunderflow");
    }
    else {
        printf("Popped element : %d", input_array[top]);
        top--;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nunderflow");
    }else{
        printf("elements present in the stack :");

        for(int i=top; i>=0; --i){
            printf("%d\n", input_array[i]);
        }
    }
}
int main()
{
    int choice;

    while(1)
    {
        printf("perform operations on stack : ");

        printf("1.push the element.\n 2.pop the element. \n 3.show.\n 4. end.");//push, pop, show
        printf("Enter the choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);

            default :
                printf("\ninvalid choice");
        }
    }
    return 0;
}
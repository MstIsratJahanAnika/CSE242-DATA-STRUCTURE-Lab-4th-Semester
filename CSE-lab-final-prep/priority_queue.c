// add and delete in priority queue
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// void insert_by_priority(int);
// void delete_by_priority(int);
// void create();
// void check(int);
// void display_pqueue();

int pri_queue[MAX];
int front, rear;

/// function to create empty queue
void create()
{
    front = rear = -1; // no element in queue initially
}

// to insert by priority
void insert_by_priority(int data)
{
    if (rear >= MAX - 1)
    {
        printf("queue overflow no more elements can be inserted \n");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        pri_queue[rear] = data;
        return;
    }
    else
    {
        check(data);
        rear++;
    }
}

// function to check priority and place element
void check(data)
{
    int i, j;
    for (i = 0; i <= rear; i++) // full queue traversal
    {
        if (data >= pri_queue[i])
        {
            for (j = rear + 1; j > i; j--) // half queue traversal from end to i
            {
                pri_queue[j] = pri_queue[j - 1]; // make space inside
            }
            pri_queue[i] = data;
            return;
        }
    }
    pri_queue[i] = data;
}

// to delete
void delete_by_priority(int data)
{
    int i;

    if (front == -1 && rear == -1)
    {
        printf("empty queue \n");
        return;
    }
    for (i = 0; i <= rear; i++)
    {
        if (data == pri_queue[i])
        {
            for (; i < rear; i++)
            {
                pri_queue[i] = pri_queue[i + 1];
            }
        }
        pri_queue[i] == -99; // no existing value - deleted
        rear--;

        if (rear == -1)
            front = -1;
        return;
    }
    printf("%d not found in queue to delete :", data);
}

// function to display queue elements
void display_queue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty \n");
    }
    front = 0;
}

void main()
{
    int n, ch; // ch-choice

    printf("1.insert an element to queue \n");
    printf("2.delete an element from queue \n");
    printf("3.display elements");
    printf("4.exit");

    create(); // to create queue

    while (1)
    {
        printf("enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter value to insert: ");
            scanf("%d", &n);
            insert_by_priority(n);
            break;
        case 2:
            printf("enter value to delete: ");
            scanf("%d", &n);
            delete_by_priority(n);
            break;
        case 3:
            display_pqueue();
            break;
        default:
            printf("choice incorrect, enter a correct choice \n");
        }
    }
}

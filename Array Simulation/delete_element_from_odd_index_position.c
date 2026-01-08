#include<stdio.h>
int main()
{
    int size, elements;

    printf("enter size of array");
    scanf("%d", &size);

    int a[size];
    printf("enter elements to insert");
    scanf("%d", &elements);

    if(elements > size)
    {
        printf("error occured");
        return 1;
    }

    printf("enter elements");
    for(int i=0; i<elements; i++)
    {
        scanf("%d", &a[i]);
    }

    int position;

    printf("enter the position to delete");
    scanf("%d", &position);

    //check for odd index
    if(position <0 || position >= elements || position%2 == 0)
    {
        printf("invalid posistion");
        return 1;
    }

    for(int i=position; i< elements-1; i++)
    {
        a[i] = a[i+1];
    }
    elements--;

    for(int i=0; i<elements; i++)
    {
        printf ("%d", a[i]);
    }
    return 0; 
}
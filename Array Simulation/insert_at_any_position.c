#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);

    int element_count;
    scanf("%d", &element_count);

    int position; //position to insert 
    scanf("%d", &position);

    int newelement;
    scanf("%d", &newelement);

    int arr[size]; //extra element for new element 

    //input elements 
    for(int i=0; i<element_count; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (element_count >= size)
    {
        printf("insertion not possible");
        return 0;
    }
    else
    {
        for(int i = element_count-1; i>= position-1; i--)// last to the position
        {
            arr[i+1] = arr[i];//move to right making space for element 
        }
    }
    arr[position-1] = newelement; // insert at posistion
    element_count++;//element count increase 
    //element_count = element_count+1;

    for(int i=0; i<element_count; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
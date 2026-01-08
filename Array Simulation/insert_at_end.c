#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);

    int element_count;
    scanf("%d", &element_count);

    int arr[size];
    for(int i=0; i<element_count; i++)
    {
        scanf("%d", &arr[i]);
    }

    int new_element;
    scanf("%d", &new_element);

    if(element_count >= size)
    {
        printf("insertion not possible");
        return 0;
    }
    else
    {
        arr[element_count] = new_element;
        element_count ++ ;
    }

    for(int i=0; i<element_count; i++)
    {
        printf("%d", arr[i]);
    }
    return 0; 
}
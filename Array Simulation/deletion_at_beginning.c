#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);

    int element_count; 
    scanf("%d",&element_count);

    int arr[size];
    for(int i=0; i<element_count; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(element_count == 0) // check if array empty 
    {
        printf("deletion not possible ");
    }

    for(int i=1; i<element_count; i++) 
    {
        arr[i-1] = arr[i];// value moved to previous index 
    }
    element_count--;// element count decreased 

    for(int i=0; i<element_count; i++)
    {
        printf("%d", arr[i]);
    }
    
    return 0; 
}
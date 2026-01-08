#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    //take input 
    for(int i=0; i<size ; i++)
    {
        scanf("%d", &arr[i]);
    }

    //output an array 
    for(int i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0; 
}
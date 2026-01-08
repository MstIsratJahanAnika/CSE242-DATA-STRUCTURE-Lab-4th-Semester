#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];

    int elementcount;
    scanf("%d", elementcount);

    //input array 
    for(int i=0; i< elementcount; i++)
    {
        scanf("%d", &arr[i]);
    }

    int position;
    scanf("%d", &position);

    //check if array is empty 
    if(elementcount == 0);
    {
        printf("deletion not possible ");
        return 0;
    }

    //shift elements
    for(int i=position; i<elementcount; i++)
    {
        arr[i-1] = arr[i];
    }
    elementcount--;

    for(int i=0; i<elementcount ; i++)
    {
        printf("%d", arr[i]);
    }
    return 0; 
}
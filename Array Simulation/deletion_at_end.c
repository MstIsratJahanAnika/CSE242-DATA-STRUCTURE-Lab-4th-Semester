#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];

    int elementCount;
    scanf("%d", &elementCount);

    // input array elements
    for(int i = 0; i < elementCount; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Step 1: Check if array is empty
    if(elementCount == 0)
    {
        printf("Deletion not possible");
        return 0;
    }

    // Step 2: Decrement elementCount
    elementCount--;

    // Print updated array
    for(int i = 0; i < elementCount; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

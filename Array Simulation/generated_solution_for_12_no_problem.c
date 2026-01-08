#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size + 5];   // extra space for insertions
    int elementCount = size;

    // input elements
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // Count even and odd
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < elementCount; i++)
    {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    int middle = elementCount / 2;  // middle index

    // --------------------------------------
    // CASE 1: If array has 2 or more even numbers
    // --------------------------------------
    if(evenCount >= 2)
    {
        // delete 2 even elements from the last position
        int deleted = 0;
        for(int i = elementCount - 1; i >= 0 && deleted < 2; i--)
        {
            if(arr[i] % 2 == 0)
            {
                // shift left to delete
                for(int j = i; j < elementCount - 1; j++)
                    arr[j] = arr[j + 1];

                elementCount--;
                deleted++;
            }
        }
    }

    // --------------------------------------
    // CASE 2: If array has exactly 1 even number
    // --------------------------------------
    else if(evenCount == 1)
    {
        int new1, new2;
        scanf("%d %d", &new1, &new2); // take 2 inputs dynamically

        // shift right to make space at middle and middle+1
        for(int i = elementCount - 1; i >= middle; i--)
            arr[i + 2] = arr[i];

        arr[middle] = new1;
        arr[middle + 1] = new2;

        elementCount += 2;
    }

    // --------------------------------------
    // CASE 3: If array has NO even numbers
    // --------------------------------------
    else if(evenCount == 0)
    {
        int newElement;
        scanf("%d", &newElement);

        // delete middle element → shift left
        for(int i = middle; i < elementCount - 1; i++)
            arr[i] = arr[i + 1];

        elementCount--;

        // insert new element at next index (middle)
        for(int i = elementCount - 1; i >= middle; i--)
            arr[i + 1] = arr[i];

        arr[middle] = newElement;

        elementCount++;
    }

    // --------------------------------------
    // Print final array
    // --------------------------------------
    for(int i = 0; i < elementCount; i++)
        printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>
int main()
{
    // 2, 9, 1, 44, 109, 44; sort using bubble sort
    int size = 6;

    int arr[6] = {2, 9, 1, 44, 109, 44};
    // input done

    // bubble sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // print the array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
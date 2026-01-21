#include <stdio.h>

int main()
{
    int size, n;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  
    printf("Enter the number of elements ");
    scanf("%d", &n);

    if (n > size) {
        printf("Array elements cannot exceed the array size.\n");
        return 1; 
    }

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}

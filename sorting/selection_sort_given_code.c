#include<stdio.h>
int main()
{
    int arr[100];

    int n;
    printf("Enter the number of elements \n");
    scanf("%d", &n);

    printf("Enter the %d integers \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i =0; i< (n-1); i++)//selection sort- continuous swapping 
    {
        int position = i;

        for(int j= i+1; j<i; j++)
        {
            if(arr[position] > arr[j])
                position = j;
        }
        if(position != i)//that means position is j
        {
            int temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
        }
    }

    printf("Sorted list in ascending order \n");

    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0; 
}
#include<stdio.h>
int main()
{
    int n, m;//n-size, m-elements
    printf("Enter the size of array");
    scanf("%d", &n);

    printf("Enter the numbers of elements : (<=%d)", n);
    scanf("%d", &m);

    if(m>n)
    {
        printf("Elements cannot exceed the size of array");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements", m);
    for(int i=0; i<m; i++)
    {
        scanf("%d", arr[i]);
    }

    printf("Even indexed elements are ");
    for(int i=0; i<m; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }


    return 0; 
}
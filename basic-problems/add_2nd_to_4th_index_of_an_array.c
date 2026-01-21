#include<stdio.h>
int main()
{
    int n;
    printf("how many index of the array \n");
    scanf("%d", &n);
    int sum = 0;
    int A[n];
    
    printf("taking values of the array \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("show the values of the array \n");
    for(int i=0; i<n; i++ )
    {
        printf("%d ", A[i]);
    }

    printf("\n");
    
    sum = sum+A[2]+A[4];
    printf("The sum is %d", sum);
    return 0;
}
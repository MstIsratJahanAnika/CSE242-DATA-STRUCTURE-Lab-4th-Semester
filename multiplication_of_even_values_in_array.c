#include<stdio.h>
int main()
{
    int n;
    printf("enter size of the array \n");
    scanf("%d", &n);

    int A[n];

    printf("taking the values of array \n");
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }

    printf("output the values of array \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    int mul = 1;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0){
            mul *= A[i]; 
        }
    }

    printf("multiplication of even index is %d", mul);
    return 0; 
}
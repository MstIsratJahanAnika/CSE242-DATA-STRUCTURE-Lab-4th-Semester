#include<stdio.h>
int main()
{
    int size, n;
    //int arr[size];
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    //int arr[size];

    printf("Enter the number of elements of the array : ");
    scanf("%d", &n);

    if(n > size){
        printf("Array elements cannot exceed the array size \n");
        return 1;
    }
 
        int arr[size];
        for(int i=0; i < n; i++){
            scanf("%d" , &arr[i]);
        }

        printf("Array elements are :\n");
        for(int i=0; i < n; i++){
            printf("%d ", arr[i]);
        }
    
    return 0; 
}
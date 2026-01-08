#include<stdio.h>
int main(void)
{
    int n;
    int arr[64];

    printf("Enter the number of elelemnts \n");
    scanf("%d", &n);

    printf("Enter %d integers \n", n);//size & elements number different 
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    } 
    for(int i=1; i<n; i++)//going forward 
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])//every time check with new element - to right index
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }

    printf("Sorted list in ascending order : \n");
    for(int i =0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0; 
}
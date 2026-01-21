#include<stdio.h>
int main()
{
    
    int n;

    printf("enter size of array :");
    scanf("%d", &n);

    if(n <= 0)// valid condition
    {
        printf("invalid array size ");
        return 1;
    }

    int arr[n];
    int track_m = 0; // to track number of elements

    int m; // number of elemnts 

    printf("enter number of elements");
    scanf("%d", &m);

    if(m < 0 || m > n) // elements > size - not valid 
    {
        printf("invalid elemnts ");
        return 1;
    }
    
    for(int i=0; i<m ; i++)
    {
        scanf("%d", &arr[i]);
        track_m ++;
    }

    if(track_m < n)
    {
        int new_element;
        printf("enter element to insert");
        scanf ("%d",&new_element);

        arr[track_m] = new_element;
        track_m++;

        printf("array after insertion");
        for(int i=0; i< track_m; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("insertion not possible");
    }
    return 0; 
}
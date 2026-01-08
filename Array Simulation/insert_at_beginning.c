#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);

    int arr[size+1]; //space for new element 
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

    int n_element; //number of elements 
    scanf("%d", &n_element);

    int newelement; //element to insert  
    scanf("%d", &newelement);

    if(n_element >= size)
    {
        printf("insertion not possible");
    }
    else
    {
        for(int i = size-1 ; i>=0; i--)
        {
            arr[i+1] = arr[i]; //elements move to right making new space at beginning 
        }
    }

    arr[0] = newelement; // insert at beginning 

    //printing part
    for(int i=0; i<size+1; i++)
    {
        printf("%d", arr[i]);
    }
    return 0; 
}



// #include<stdio.h>

// int main()
// {
//     int size;
//     scanf("%d", &size);

//     int arr[size+1];

//     for(int i = 0; i < size; i++)
//         scanf("%d", &arr[i]);

//     int newelement;
//     scanf("%d", &newelement);

//     // shift right
//     for(int i = size - 1; i >= 0; i--)
//         arr[i + 1] = arr[i];

//     arr[0] = newelement;

//     for(int i = 0; i < size + 1; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }



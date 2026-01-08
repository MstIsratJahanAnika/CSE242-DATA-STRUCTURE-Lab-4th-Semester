#include<stdio.h>
int main()
{
    int size, elements;

    printf("enter array size");
    scanf("%d", &size);

    printf("enter elements of array");
    scanf("%d", &elements);

    if(elements > size)
    {
        printf("error occured");
        return 1;// failure or wrong happend
    }

    int a[size];
    printf("enter elements");
    for(int i=0; i<elements; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("even elements from array are");
    for(int i=0; i<elements; i++)
    {
        if(a[i] % 2 == 0)// if(i % 2 == 0) printf ("%d", a[i]); - even indexed
        {
            printf("%d", a[i]);
        }
    }

    for(int i=0; i<elements; i++)
    {
        printf("%d", &a[i]);
    }
    return 0; 
}
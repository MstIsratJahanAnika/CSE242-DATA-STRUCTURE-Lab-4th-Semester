/* 1. delete 2 even elements from last posititon
2. if 1 even elements there, insert 2 elements in middle and in very next index
3. if no even elements, delete middle index and insert next to middle
4. finally, count odd and even elements */

#include<stdio.h>
int main()
{
    int size, elements;
    printf("enter size of array");
    scanf("%d",&size);

    int a[size];

    printf("enter the elements of the array ");
    scanf("%d", &elements);

    if(elements > size)
    {
        printf("elements exceeds array size");
        return 1;
    }

    printf("enter the elements to the array ");
    for(int i=0; i<elements ; i++)
    {
        scanf("%d",&a[i]);
    }

    int odd_count=0, even_count=0;
    for(int i=0; i<elements; i++)
    {
        if(a[i] %2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        if(even_count >= 2)
        {
            //if even numbers are 2 or more delete last 2 even numbers 
            int del_even = 0;
            for(int i=elements-1; i>=0 && del_even < 2; i--)
            {
                if(a[i] %2 == 0)
                {
                    //shift elements to left
                    for (int j = i; j < elements - 1; j++) 
                    {
                        a[j] = a[j + 1];
                    }
                    elements--;
                    del_even++;
                }
            }
        }
        else if (even_count ==1)
        {
            //insert 2 elements in middle
            int new_elem[2];
            printf("enter 2 elements to insert");
            for(int i=0; i<2; i++)
            {
                scanf("%d", &new_elem[i]);
            }

            //make space for new elements
            for(int i=elements-1; i>= elements/2; i--)// middle = elements/2
            {
                a[i+2] = a[i];
            }

            //inser to middle 
            a[elements/2] = new_elem[0];
            a[(elements/2) + 1] = new_elem[1];
            elements+=2;//increase array size
        }
        else
        {
            //delete middle element
            //insert new to next to middle 

            int middle = elements/2;
            for(int i=middle; i< elements-1; i++)
            {
                a[i] = a[i+1];
            }
            elements--;

            //insert new one
            int new_insert;
            printf("input element to insert");
            scanf("%d", &new_insert);

            for(int i= elements-1; i>=middle; i--)
            {
                a[i+1] = a[i];
            }
            a[middle+1] = new_insert;
            elements++;

            for(int i=0; i<elements; i++)
            {
                printf("%d", a[i]);
            }
        }
    }
    return 0; 
}
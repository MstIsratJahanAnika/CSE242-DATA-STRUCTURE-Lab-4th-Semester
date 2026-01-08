#include <stdio.h>
int main()
{
    // declaring size/element count
    int n;
    printf("enter number of elements ");
    // taking input of element count
    scanf("%d", &n);
    // declaring array
    int a[n];
    for (int i = 0; i < n; i++)
    {
        // taking input for array elements
        scanf("%d", &a[i]);
    }

    int i, key, found = 0;
    scanf("%d",&key);// key to find 
    for(int i=0; i<n;i++)
    {
        if(key == a[i])
        {
            printf("found");
            found = 1;
            break;
        }
    }
    if(found = 0)
    {
        printf("not found");
    }
    return 0;
}
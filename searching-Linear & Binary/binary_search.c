#include<stdio.h>
int main()
{
    int n;
    printf("number of elements");
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int key; 
    scanf("%d", &key);

    int start=0, end= n-1, mid, found = 0;
    while(start <= end)
    {
        mid = (start+end)/2;
        if(a[mid]= key)
        {
            found = 1;
            printf("found");
            break;
        }
        else if(a[mid] < key)
        {
            start = mid + 1;
        }
        else if(a[mid] > mid)
        {
            end = mid-1;
        }
    }
    if(found == 0)
        printf("not found");
    return 0; 
}
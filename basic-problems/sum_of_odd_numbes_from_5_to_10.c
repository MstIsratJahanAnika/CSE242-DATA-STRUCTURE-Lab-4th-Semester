#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i=5; i<=20; i++)
    {
        if(i%2 == 1)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0; 
}
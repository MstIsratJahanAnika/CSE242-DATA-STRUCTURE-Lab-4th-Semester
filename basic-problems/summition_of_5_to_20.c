#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    //sum = a+b;
    for(int i=a; i<=b; i++)
    {
        sum += i;
    }
    printf("sum from %d to %d is %d ", a, b, sum);

    return 0;
}

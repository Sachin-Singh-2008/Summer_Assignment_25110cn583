#include<stdio.h>

int sum(int a, int b)
{
    int value;

    value=a+b;

    return value;
}

int main()
{
    int a, b;

    printf("Enter the numbers : ");
    scanf("%d%d", &a, &b);

    printf("\nThe sum of entered number is : %d", sum(a,b));

    return 0;
}
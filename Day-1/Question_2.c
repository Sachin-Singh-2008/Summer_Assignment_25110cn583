#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe multiplication table for given number is : ");

    for(int i=1; i<=10; i++)
    {
        printf("\n%d", n*i);
    }

    return 0;
}
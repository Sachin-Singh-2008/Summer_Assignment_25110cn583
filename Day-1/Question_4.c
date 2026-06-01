#include<stdio.h>

int main()
{
    int n, count=0;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe numbers of digits for entered number is : ");

    while(n>0)
    {
        count++;
        n/=10;
    }

    printf("%d", count);

    return 0;
}
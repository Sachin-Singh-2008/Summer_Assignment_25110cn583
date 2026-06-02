#include<stdio.h>

int main()
{
    int n, rev=0, d;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe reverse of entered number is : ");

    while (n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }

    printf("%d", rev);

    return 0;
}
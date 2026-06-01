#include<stdio.h>

int main()
{
    int n, sum=0;

    printf("Enter the number to find the sum : ");

    scanf("%d", &n);

    printf("The sum of numbers upto n digit is : ");

    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }

    printf("%d", sum);

    return 0;
}
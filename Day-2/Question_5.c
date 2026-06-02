#include<stdio.h>

int main()
{
    int n, sum=0, d;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe sum of digits of entered number is : ");

    while(n>0)
    {
       d=n%10;
       sum+=d;
       n/=10;
    }

    printf("%d", sum);

    return 0;
}
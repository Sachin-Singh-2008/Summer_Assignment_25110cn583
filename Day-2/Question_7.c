#include<stdio.h>

int main()
{
    int n, pr=1, d;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe product of digits of entered number is : ");

    while(n>0)
    {
       d=n%10;
       pr*=d;
       n/=10;
    }

    printf("%d", pr);

    return 0;
}
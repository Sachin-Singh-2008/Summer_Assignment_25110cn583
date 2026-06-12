#include<stdio.h>

int is_perfect(int n)
{
    int fact=0;

    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            fact+=i;
        }
    }

    if(fact==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("\nThe entered number is ");
    
    if(is_perfect(n))
        printf("a perfect number.");
    else
        printf("not a perfect number.");

    return 0;
}
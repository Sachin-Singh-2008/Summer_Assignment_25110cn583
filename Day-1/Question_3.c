#include<stdio.h>

int main()
{
    int n, fact=1;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe factorial of entered number is : ");

    if(n==0 || n==1)
        printf("1");
    else
    {
        for(int i=1; i<=n; i++)
        {
            fact*=i;
        }
        printf("%d", fact);
    }

    return 0;
}
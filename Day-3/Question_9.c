#include<stdio.h>

int main()
{
    int n, flag=1;

    printf("Enter the number : ");

    scanf("%d",&n);

    for (int i = 2; i < n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }

    if(flag==0 || n==0 || n==1)
        printf("\nThe entered number is not a prime number.");
    else
        printf("\nThe entered number is a prime number.");

    return 0;
}
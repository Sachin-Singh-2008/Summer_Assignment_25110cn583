#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe factors of the given number are : 1, ");

    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
#include<stdio.h>

int main()
{
    int Gcd, n1, n2;

    printf("Enter the numbers : ");

    scanf("%d%d", &n1, &n2);

    for(int i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            Gcd=i;
        }
    }

    printf("\nThe GCD of given number is %d", Gcd);

    return 0;
}
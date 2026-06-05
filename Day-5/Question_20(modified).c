#include<stdio.h>

int is_prime(int n)
{
    int flag;
    flag=1;

    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }

    return flag;
}

int main()
{
    int n, a=0, count=0, max_prime;

    printf("Enter the number : ");

    scanf("%d", &n);

    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {

        if(is_prime(i))
        {
            max_prime=i;
        }
        }
    }

    printf("\nThe greatest prime factor for given number is %d", max_prime);

    return 0;
}
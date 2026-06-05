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
            count++;
        }
    }

    int fact[count];

    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            fact[a]=i;
            a++;
        }
    }

    for(int i=0; i<count; i++)
    {
        if(is_prime(fact[i]))
        {
            max_prime=fact[i];
        }
        
    }

    printf("\nThe greatest prime factor for given number is %d", max_prime);

    return 0;
}
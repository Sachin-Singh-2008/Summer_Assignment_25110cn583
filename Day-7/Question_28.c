#include<stdio.h>
#include<math.h>

int count_digit(int n)
{
    int n_digits=0;

    while(n>0)
    {
        n_digits++;
        n/=10;
    }

    return n_digits;
}

int reverse(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10)*(pow(10,count_digit(n)-1))+reverse(n/10);
}

int main()
{
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("\nThe reverse of entered number is : %d ", reverse(n));

    return 0;
}
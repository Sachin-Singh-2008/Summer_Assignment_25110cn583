#include<stdio.h>

int main()
{
    int n, temp, count=1;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe entered number is ");

    temp=n;

    for(int i=2; i<=temp/2; i++)
    {
        if(temp%i==0)
        {
            count+=i;
        }
    }

    if(count==n)
        printf("a perfect number.");
    else
        printf("not a perfect number.");

    return 0;
}
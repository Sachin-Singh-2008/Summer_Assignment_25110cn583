#include<stdio.h>

int main()
{
    int n, rev=0, d;

    printf("Enter the number : ");

    scanf("%d", &n);

    int orig=n;

    while (n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }

    if(rev==orig)
        printf("\nThe number is palindrome.");
    else 
        printf("\nThe number is not palindrome.");

    return 0;
}
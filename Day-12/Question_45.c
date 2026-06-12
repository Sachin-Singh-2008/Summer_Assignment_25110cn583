#include<stdio.h>

int palindrome(int a)
{
    int rev, temp, d;
    temp=a;

    while (temp>0)    
    {
            d=temp%10;
            rev=rev*10+d;
            temp/=10;
    }

    if(rev==a)
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

    if (palindrome(n))
    {
        printf("palindrome.");
    }
    else
    {
        printf("not palindrome.");
    }

    return 0;
}
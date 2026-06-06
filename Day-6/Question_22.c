#include<stdio.h>
#include<math.h>

int count_digit(int n)
{
    int n_count=0;

    while(n>0)
    {
        n_count++;
        n/=10;
    }
    
    return n_count;
}

int main()
{
    int num, decimal=0, temp, d, l;

    printf("Enter the binary number : ");
    scanf("%d", &num);
    printf("\nThe decimal number for given number is : ");

    l=count_digit(num);
    
    int a[l];
    temp=num;

    for(int i=l-1; i>=0; i--)
    {   
        d=temp%10;
        a[i]=d;
        temp/=10;
    }


    for(int i=0; i<l; i++)
    {
        decimal+= (a[i])*(pow(2,l-i-1));
    }
    
    printf("%d", decimal);
    
    return 0;
}
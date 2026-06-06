#include<stdio.h>
#include<math.h>

int main()
{
    int n, decimal=0, temp, d;

    printf("Enter the binary number : ");
    scanf("%d", &n);

    temp=n;

    for(int i=0; temp>0 ;i++)
    {
        d=temp%10;

        decimal+= (d)*(pow(2,i));

        temp/=10;
    }

    printf("\nThe decimal form of entered number is : %d", decimal);

    return 0;
}
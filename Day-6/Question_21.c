#include<stdio.h>
#include<math.h>

int main()
{
    int n, count, a;

    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i=0; i>=0; i++)
    {
        a=pow(2,i);
        if(n<a)
        {
            count=i;
            break;
        }
    }

    printf("\nThe binary conversion for entered number is : ");

    for(int i=count; i>=0; i--)
    {
        a=pow(2,i);

        if(a>n)
        {
            printf("0");
        }
        else
        {
            printf("1");
            n%=10;
        }
    }

    return 0;
}
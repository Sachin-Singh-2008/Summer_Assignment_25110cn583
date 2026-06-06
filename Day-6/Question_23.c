#include<stdio.h>
#include<math.h>

int main()
{
    int n, count, set_bits=0 , a;

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

    for(int i=count; i>=0; i--)
    {
        a=pow(2,i);

        if(a<=n)
        {
            set_bits++;
            n-=a;
        }
    }

    printf("\nThe number of set bits for entered number are : %d", set_bits);

    return 0;
}
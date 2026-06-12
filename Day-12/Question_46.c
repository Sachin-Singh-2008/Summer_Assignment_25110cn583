#include<stdio.h>
#include<math.h>

int n_count(int x)
{
    int count=0;

    while(x>0)
    {
        count++;
        x/=10;
    }

    return count;
}

int armstrong(int n)
{
    int temp, d, c, arm=0;
    c=n_count(n);
    temp=n;

    while (temp>0)
    {
        d=temp%10;
        arm+=pow(d,c);
        temp/=10;
    }
    
    if(arm==n)
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

    if(armstrong(n))
        printf("armstrong");
    else
        printf("not armstrong");

    return 0;
}


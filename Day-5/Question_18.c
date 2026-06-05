#include<stdio.h>

int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    else
        return x*fact(x-1);
}


int main()
{
    int n, temp, str=0;

    printf("Enter the number : ");

    scanf("%d", &n);

    printf("\nThe entered number is ");

    temp=n;

    for(int i=temp; temp>0;)
    {
        i=temp%10;
        str+= fact(i);
        temp/=10;
    }

    if(str==n)
        printf("a strong number.");
    else
        printf("not a strong number.");

    return 0;
}
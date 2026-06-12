#include<stdio.h>

int main()
{
    int n, even=0, odd=0;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n];

    printf("\nEnter the elements of the array : \n");
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe elements entered in the array are : \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    printf("\nThe even and odd elements present in the entered array are %d and %d respectively.", even, odd);
    
    return 0;
}

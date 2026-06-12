#include<stdio.h>

int main()
{
    int n;

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
    }
    
    return 0;
}

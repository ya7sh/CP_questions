#include <stdio.h>
int main()
{
    int a[100], n, p, c = 0;
    printf("Enter size of the array:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == p)
        {
            printf("Element found at position %d", i + 1);
            c = 1;
        }
    }
    if (c == 0)
        printf("Element not found!");
    return 0;
} 

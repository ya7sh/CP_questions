#include <stdio.h>
int main()
{
    int a[20], n, temp = 0;
    printf("enter the no. of elements");
    scanf("%d", &n);
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int i, j, small;
    for (i = 0; i < n - 1; i++)
    {
        small = i;

        for (j = i + 1; j < n; j++)
            if (a[j] < a[small])
                small = j;
        int temp = a[small];
        a[small] = a[i];
        a[i] = temp;
    }
    printf("array after sorting:");
    for (j = 0; j < n; j++)
        printf("%d ", a[j]);
    return 0;
}
#include <stdio.h>
int main()
{
    int a[20], n, j, temp = 0;
    printf("enter the size of the array");
    scanf("%d", &n);
    printf("enter the elements");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    printf("the array after sorting is:");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
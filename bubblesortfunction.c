#include <stdio.h>
void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int a[20], n;
    printf("enter the size of array");
    scanf("%d", &n);
    printf("enter the elements");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubble(a, n);
    printf("The elements after sorting");
    for (int j = 0; j < n; j++)
        printf("%d ", a[j]);
    return 0;
}
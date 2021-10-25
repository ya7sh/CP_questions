#include <stdio.h>
void sort(int a[], int n)
{
    int i, j, temp = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void intersectionofarray(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
            j++;
        else if (a[i] < b[j])
            i++;
        else
        {
            printf("%d ", a[i++]);
            j++;
        }
    }
}
int main()
{
    int a[20], b[20], n, m;
    printf("Enter the size of array1: ");
    scanf("%d", &n);
    printf("Enter the elements of array1: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter the size of array2: ");
    scanf("%d", &m);
    printf("Enter the elements of array2: ");
    for (int j = 0; j < m; j++)
        scanf("%d", &b[j]);
    sort(a, n);
    sort(b, m);
    intersectionofarray(a, b, n, m);
    return 0;
}
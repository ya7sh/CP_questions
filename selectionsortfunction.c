#include <stdio.h>
void selection(int a[], int n)
{
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
}
void print(int a[], int n)
{
    printf("The array is:");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[20], n;
    printf("Enter the no. of elements in the array");
    scanf("%d", &n);
    printf("Enter the elements of the array");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    print(a, n);
    selection(a, n);
    print(a, n);
    return 0;
}
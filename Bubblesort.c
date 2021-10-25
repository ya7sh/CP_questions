#include <stdio.h>

int main()
{
    int a[20], n, temp = 0;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the elements of the array");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]); 
   for(int i = 0; i < n; i++)    
    {    
      for(int j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }  
    printf("The array is now in ascending order as:");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number for array: ");

    scanf("%d",&n);
    int a[n], r[n];
    printf("Enter %d num for array:\n",n);
    for (int i=0; i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    
    for (int i=0; i<n; i++) 
    {
        r[i] = a[n-i-1]; 
    }

    printf("The reversed array is:\n");
    for (int i=0; i<n;i++) 
    {
        printf("%d ",r[i]);
    }

    getch();
}

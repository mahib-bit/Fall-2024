#include <stdio.h>

void copy(int *ptr1, int *ptr2, int size) 
{
    for (int i=0; i<size;i++)
    {
        ptr2[i] = ptr1[i]; 
    }
}

int main() {
    int n;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    int arr1[n],arr2[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i=0;i<n;i++)    
    {
        scanf("%d",&arr1[i]);
    }

    copy(arr1,arr2,n);

    printf("The copied array is:\n");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",arr2[i]);
    }
}

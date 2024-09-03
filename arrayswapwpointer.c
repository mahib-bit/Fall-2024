#include <stdio.h>
void switching(int *p1,int *p2,int size) 
{
    for (int i=0; i<size;i++) 
    {
        int temp = *(p1 + i);  
        *(p1 + i) = *(p2 + i);  
        *(p2 + i) = temp;  
    }
}

int main() 
{
    int n;
    printf("Enter array number: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter elements of the first array:\n");
    for (int i=0; i<n; i++) 
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of the second array:\n");
    for (int i=0;i<n; i++) 
    {
        scanf("%d",&arr2[i]);
    }
    
    switching(arr1,arr2,n);

    printf("First array after swapping: \n");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",arr1[i]);
    }

    printf("Second array after swapping: \n");
    for (int i=0; i<n;i++) 
    {
        printf("%d ",arr2[i]);
    }
}

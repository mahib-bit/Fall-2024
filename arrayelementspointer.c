#include<stdio.h>
    int main()
{
    int i,j,*pointer;
    printf("Enter number of array elements :\n");
    scanf("%d",&j);
    int arr[j];
    pointer = arr;
    printf("Enter %d elements:\n",j);
    for(int i=0;i<j;i++)
    {
        scanf("%d",(pointer+i)); //pointer+i =&arr[i]
    }   
    printf("The array elements are\n");
    for(int i=0;i<j;i++)
    {
        printf("%d\n",*(pointer+i));
    } 
}
    
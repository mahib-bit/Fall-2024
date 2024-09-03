#include <stdio.h>

int main()
{
    int n1,n2,sum;
    int *ptr1,*ptr2;

    ptr1 = &n1;
    ptr2 = &n2;

    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);

    sum = *ptr1 + *ptr2;

    printf("Sum = %d", sum);

    return 0;
}
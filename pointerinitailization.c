#include <stdio.h>

int main() {
    int n = 5;
    float f = 9.9;
    char ch = 'p';
    int *ptr1;
    float *ptr2;
    char *ptr3;

    ptr1 = &n;
    ptr2 = &f;
    ptr3 = &ch;

    printf("The value of n is %d and the address  is %x\n", *ptr1,ptr1);
      printf("The value of f is %.4f and the address  is %p\n",*ptr2,ptr2);
        printf("The value of Ch is %c and the address  is %d\n", *ptr3,ptr3);

    return 0;
}

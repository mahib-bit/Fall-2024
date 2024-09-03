#include<stdio.h>

    void exchange(int *p1,int *p2)
    {
        int temp;
        temp=*p1;
        *p1=*p2;
        *p2=temp;
    }

    int main()
    {
        int s,w;
        printf("Enter any two numbers :");
        scanf("%d %d",&s,&w);
        printf("Before swapping S = %d and W = %d\n",s,w);

        exchange(&s,&w);

        printf("After swapping S = %d and W = %d",s,w);
        
    }
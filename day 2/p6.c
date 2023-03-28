#include<stdio.h>
void main()
{
    int a=22;
    int * p1;
    p1=&a;
    printf("%p\n",&a);
    printf("%p\n",p1);
    printf("%d\n",a);
    printf("%d\n",*p1);
}

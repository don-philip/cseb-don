#include<stdio.h>
void main()
{
    int a=22,b=12,temp;
    int * p1, * p2;
    p1=&a;
    p2=&b;
    temp=*p1;
    a=*p2;
    b=temp;
    printf("%d\n",a);
    printf("%d\n",b);
}

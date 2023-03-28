#include<stdio.h>
void main()
{
    int a=24 ,b=12,q;
    int * p1, * p2;
    p1=&a;
    p2=&b;
    q=*p1/ *p2;
    printf("%d\n",q);
}

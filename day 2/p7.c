#include<stdio.h>
void main()
{
    int a=22,b=12,sum;
    int * p1, * p2;
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    printf("%d\n",sum);
}

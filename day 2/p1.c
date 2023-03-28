#include<stdio.h>
void main()
{
    int i=0,n=5,r,p,a=0;
    while(n>0)
    {
        r=n%10;
        p=8^i;
        a=a+p*r;
        i=i+1;
        n=n/10;
    }
    printf("a=%d",a);
}

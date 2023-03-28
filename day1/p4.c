#include<stdio.h>
void main()
{
    int a,b,c,flag=0;
    printf("Enter the length of sides :\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)<=c||(b+c)<=a||(a+c)<=b)
            flag = 1;
    if(flag == 0)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
}

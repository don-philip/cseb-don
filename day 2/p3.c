#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int len,count=0,i;
    printf("Enter a string\n");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='*')
            count++;
        else if(str[i]=='#')
            count--;
    }
    printf("Value=%d",count);
}

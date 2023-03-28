#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],temp;
    int i,n,j;
    printf("Enter string\n");

        scanf("%s",a);
   n=strlen(a);
    for(i=0,j=n-1;i<(n+1)/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        if(a[i]=='0')
            a[i]='$';
        if(a[j]=='0')
           a[j]='j';
    }
    for(i=0;i<n;i++)
        printf("%c   ",a[i]);
}

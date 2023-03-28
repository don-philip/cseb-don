#include<stdio.h>
void main()
{
    int i,j,m,n,a[3][3];
    printf("enter m,n\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Main diagonal\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("\nUpper Triangle\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("\nLower Triangle\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("\nNon Diagonal\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
}

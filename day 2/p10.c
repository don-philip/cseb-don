#include<stdio.h>
void main()
{
    int i,j,m,n,a[3][3];
    printf("enter m,n\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements\n")
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
}

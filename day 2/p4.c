#include<stdio.h>
#include<math.h>
void main()
{
    int a[10],sum=0,i=0,n,flag=0;
    float p;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
   p=sqrt(sum);

    printf("Sum=%d\n",sum);
     printf("p=%d\n",p);
    for(i=2;i<=p;i++)
    {
        if(sum%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("not prime\n");
    else
        printf("prime\n");
}

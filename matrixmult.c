#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k;
    int a[5][5],b[5][5],sum[5][5];
    printf("enter the rows and columns:");
    scanf("%d%d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("enter the element:");
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the rows and columns:");
     scanf("%d%d",&r2,&c2);
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("enter the element:");
            scanf("%d",&b[i][j]);
        }
    }
    if(r2!=c1)
    printf("not possible");
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {sum[i][j]=0;
            for(k=0;k<r2;k++)
            {
                sum[i][j]+=a[i][k]*b[k][j];
            }
            }
            }
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r1;j++)
                {
                    printf("%d\t",sum[i][j]);
                }
            }
    }
    return 0;
}

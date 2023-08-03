#include <stdio.h>
int main()
{
    int n,i,j,point=0,r,c;
    printf("enter rows and columns: ");
    scanf("%d %d" ,&r,&c);
    int a[r][c];
    printf("enter the matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element: ");
            scanf("%d" ,&a[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=j && a[i][j]==0)
            {
                point=1;
                break;
            }
        }
    }
    if(point==1)
        printf("it is diagonal");
    else
        printf("it s not diagonal");
    return 0;
}

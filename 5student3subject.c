#include<stdio.h>
int main()
{
    int a[5][3],i,j;
    for(i=0;i<5;i++)
    {printf("Enter roll number:");
    scanf("%d",&a[i][0]);
        for(j=0;j<3;j++)
        {printf("Enter marks:");
        scanf("%d",&a[i][j]);
        }
    }
    if(a[0][1]>=a[0][2]&&a[0][1]>=a[0][3])
    printf("Top mark %d sub 1",a[0][1]);
    else if(a[0][2]>=a[0][1]&&a[0][2]>=a[0][3])
    printf("Top mark %d sub 1",a[0][2]);
    else
    printf("Top mark %d sub 1",a[0][3]);
    if(a[1][1]>=a[1][2]&&a[1][1]>=a[1][3])
    printf("Top mark %d sub 2",a[1][1]);
    else if(a[1][2]>=a[1][1]&&a[1][2]>=a[1][3])
    printf("Top mark %d sub 2",a[1][2]);
    else
    printf("Top mark %d sub 2",a[1][3]);
     if(a[2][1]>=a[2][2]&&a[2][1]>=a[2][3])
    printf("Top mark %d sub 3",a[2][1]);
    else if(a[2][2]>=a[2][1]&&a[2][2]>=a[2][3])
    printf("Top mark %d sub 3",a[2][2]);
    else
    printf("Top mark %d sub 3",a[2][3]);
    return 0;
}

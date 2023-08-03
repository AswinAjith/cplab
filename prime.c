#include<stdio.h>
int main()
{
    int a,b,i,n,flag=0;
    printf("Enter numbers:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
    for(n=2;n<=i/2;n++)
    {
        if(i%n==0)
        {
            flag++;
        }
        }
         if(flag==0)
         printf("%d",i);
         flag=0;
     }
     return 0;
    }

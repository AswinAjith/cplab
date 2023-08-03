#include<stdio.h>
int main()
{   int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%3==0&&n%5==0)
    {
        printf("divisible by 3 and 5");
    }
    else if(n%3==0&&n%5!=0)
    {
        printf("divisible only by 3");
    }
    else
    {
       printf("divisible only by 5"); 
    }
    return 0;
}

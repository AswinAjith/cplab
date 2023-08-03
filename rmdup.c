#include <stdio.h>
int main()
{
        int i,j,k,n;
        printf("Enter the size of the array");
        scanf("%d",&n);
        int a[n];
        printf("Enter the matrix");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(a[i]==a[j])
                        {
                                for(k=j;k<n-1;k++)
                                {
                                        a[k]=a[k+1];
                                }
                                n--;
                                j--;
                        }
                }
        }
        printf("New array is: \n");
        for(i=0;i<n;i++)
        {
                printf("%d",a[i]);
        }
        return 0;
}

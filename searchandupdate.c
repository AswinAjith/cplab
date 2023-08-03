#include<stdio.h>
int main(){
int n,i,search;
printf("Enter number of elements in list:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{   printf("Enter the elements in list:\n");
    scanf("%d",&arr[i]);
}
printf("Enter the number to check:\n");
scanf("%d",&search);
for (i=0;i<n;i++)
  {
    if(arr[i]==search)
    { printf("ok");
      printf("%d is present at location %d.\n", search, i+1);
      break;
    }
    else
    {
        arr[n]=search;
        printf("Number not present. The array after adding elements:");
        for(i=0;i<n;i++)
        printf("%d",arr[i]);
    }
  }
return 0;
}

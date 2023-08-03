#include <stdio.h>
int main() {
int n,i,j,temp=0;
printf("Enter number of elements in array:");
scanf("%d",&n);
int arr[n];
printf("Enter elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++){
   for(j=0;j<n-1;j++){
    if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
    }
}
printf("The largest number is:%d",arr[n-1]);
printf("The smallest number is:%d",arr[0]);
return 0;
}

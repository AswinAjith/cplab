#include <stdio.h>
int main(){
int i,n;
int t1=0, t2=1,t3=0;
printf("Enter number of terms needed for fibonacci:");
scanf("%d",&n);
int arr[n];
arr[0]=0;
arr[1]=1;
for(i=2;i<n;i++){
    t3=t1+t2;
    arr[i]=t3;
    t1=t2;
    t2=t3;
}
printf("The fibonacci series upto %d terms :",n);
for(i=0;i<n;i++)
printf("%d",arr[i]);
return 0;
}

    

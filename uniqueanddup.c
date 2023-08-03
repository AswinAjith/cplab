#include <stdio.h>

int main() {
	int i,n,j;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	for (i = 0; i < n; i++){
		printf("Enter the element: ");
		scanf("%d",&a[i]);
	}
	for(i = 0; i < n; i++){
		int flag = 0;
		for (j = 0; j<n; j++){
			if(i!=j) {
				if (a[i] == a[j]){
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1) {
			printf("The number %d is duplicate\n",a[i]);
		}else {
			printf("The number %d is unique\n",a[i]);
		}
	}
	
}

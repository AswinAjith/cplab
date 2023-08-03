// Write a C program to accept a two dimenstoinal matrix and display the row sum, column sum and diagonal sum of elements.


#include <stdio.h>

int main() {
	int r,c,i,j;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for (i=0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("Enter the element [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0; i < r; i++) {
		int rsum = 0;
		for (j = 0; j < c; j++) {
			rsum+=arr[i][j];
		}
		printf("The sum of row %d is: %d\n",i+1,rsum);
	}

	for (j = 0; j < c; j++) {
		int colsum = 0;
		for (i = 0; i < r; i++) {
			colsum += arr[i][j];
		}
		printf("The sum of column %d is: %d\n",j+1,colsum);
	}

	int disum = 0;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			if (i == j) {
				disum += arr[i][j];
			}
		}	
	}
	printf("The sum of diagonal elements is: %d\n",disum);
	return 0;
}

#include <stdio.h>

int main() {
	int c1,c2,r1,r2;
	printf("Enter the rows and columns of first matrix ");
	scanf("%d %d",&r1,&c1);
	printf("Enter the rows and columns of second matrix ");
	scanf("%d %d",&r2,&c2);

	int i,j, arr1[r1][c1], arr2[r2][c2];

	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			printf("Enter element [%d][%d] for first matrix: ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for (i = 0; i < r2; i++) {
		for (j = 0; j < c2; j++) {
			printf("Enter element [%d][%d] for second matrix: ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	int sum[r1][c1];		

	if (r1==r2 && c1==c2) {
		for (i = 0; i < r2; i++) {
			for (j = 0; j < c2; j++) {
				sum[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
	}
	for (i = 0; i < r2; i++) {
		for (j = 0; j < c2; j++) {
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}

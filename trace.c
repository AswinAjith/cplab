#include <stdio.h>

int main() {
	int c1,c2,r1,r2,trace=0;
	printf("Enter the rows and columns of matrix ");
	scanf("%d %d",&r1,&c1);
	int i,j, arr1[r1][c1];

	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			printf("Enter element [%d][%d] for matrix: ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
		    if(i==j)
		    trace=trace+arr1[i][j];
		}
	}
	printf("The trace is: %d",trace);
	return 0;
}

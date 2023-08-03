#include <stdio.h>

int fact(int x) {
	if (x!=1) {
		return x*fact(x-1);
	}
	return 1;
}
int main() {
	int number, x, sum;
	printf("Enter the number: ");
	scanf("%d",&number);
	while (number!=0) {
		x = number%10;
		number = number/10;
		sum += fact(x);
	}
	printf("%d",sum);


	if(sum == number){
		printf("The number is strong");
	}else if(sum != number) {
		printf("The number is not strong");
	}
	return 0;
}

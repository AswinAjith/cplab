#include <stdio.h>

struct Student {
	int roll_no;
	char name[30];
	int mark_for_c;
};

int main() {
	int n,i,sum=0;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	struct Student st[n];
	for(i = 0; i < n; i++) {
		printf("Enter roll no: ");
		scanf("%d",&st[i].roll_no);
		printf("Enter name: ");
		scanf("%s",st[i].name);
		printf("Enter mark for c: ");
		scanf("%d",&st[i].mark_for_c);
		sum += st[i].mark_for_c;
	} 
	float avg = (float)sum/n;
	printf("The average mark for c is: %f",avg);
	return 0;
}

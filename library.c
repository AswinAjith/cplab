#include <stdio.h>
struct Library{
	int bookid;
	char bname[40];
	char author[40];
	int copies;
};
int main() {
	int n,i,j;
	printf("Enter the number of books ");
	scanf("%d",&n);
	struct Library lb[n];
	for (i=0; i<n; i++){
		printf("Enter bookid: ");
		scanf("%d",&lb[i].bookid);
		printf("Enter name of book: ");
		scanf("%s",&lb[i].bname);
		printf("Enter author name: ");
		scanf("%s",&lb[i].author);
		printf("Enter copies: ");
		scanf("%d",&lb[i].copies);
	}

	for (i=0; i <n ; i++) {
		struct Library temp[1];
		for (j = 0; j < n-1; j++){
			if(lb[j].copies > lb[j+1].copies){
				temp = lb[i];
				lb[i] = lb[i+1];
				lb[i+1] = temp;
			}
		}
	}
	for (i = 0; i<n; i++){
		printf("The number of copies in ascending order is %d",lb[i].copies);
	}
	return 0;
}

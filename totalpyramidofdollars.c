	// attempted on 10th March 2023
	
// $
// $$$
// $$$$$
// $$$$$$$
// $$$$$$$$$
// $$$$$$$
// $$$$$
// $$$
// $

#include<stdio.h>
int main() {

	int n, i, j;
	
	printf("Enter the longest line of the pyramid pattern: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
	
		for (j=0; j < 2*i+1; j++) {
			printf("$");
		} for (j=n-1; j < 2*i+1; j--) {
			printf("$");
		}
		
		printf("\n");
	}

	return 0;
}

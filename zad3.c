#include <stdio.h>

void printer(int tab[], int n) {
	for (int i =0; i<n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}

int main(void) {
	int tab[] = {1,2,6,12,8,12,12,14,10,18};
	printer(tab, 10);
	int mean[10];
	mean[0] = tab[0];
	mean[9] = tab[9];
	for (int i = 1; i<9; i++) {
		mean[i] = (tab[i-1] + tab[i+1])/2;
	}
	printer(mean, 10);
	return 0;
}

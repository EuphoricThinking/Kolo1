#include <stdio.h>

void printer(int tab[], int n) {
	for (int i =0; i<n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}

int main(void) {
	int tab[] = {1,2,6,12,8};
	printer(tab, 5);
	for (int i = 1; i<4; i++) {
		tab[i] = (tab[i-1] + tab[i+1])/2;
	}
	printer(tab, 5);
	return 0;
}

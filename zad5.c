#include <stdio.h>

int printer(int tab[], int n) {
	for (int i = 0; i<n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}

int main(void) {
	int tab[] = {1,2,3,4,5};
	printer(tab, 5);
	tab[0] = (tab[1]+tab[4])/2;
	for (int i = 1; i<4; i++) {
		tab[i] = (tab[i-1]+tab[i+1])/2;
	}
	tab[4] = (tab[0] + tab[3])/2;
	printer(tab,5);
	return 0;
}

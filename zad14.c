#include <stdio.h>

void printer(int tab[], int n) {
	for (int i = 0; i<n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}

int main(void) {
	int tab[] = {1,2,3,4,5,6};
	int n = 6;
	printer(tab, n);

	for (int i = 0; i<(n/2); i++) {
		int pom = tab[i];
		tab[i] = tab[n-i-1];
		tab[n-i-1] = pom;
	}

	printer(tab, n);
	return 0;
}

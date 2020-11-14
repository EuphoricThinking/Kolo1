#include <stdio.h>

void printer(int tab[], int n) {
	for (int i =0; i<n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}

int main(void) {
	int tab[] = {1,3,7,7,8};
	printer(tab, 5);

	for (int i = 3; i>=1; i--) {
		tab[i-1] = (tab[i]*2) - tab[i+1];
	}
	printer(tab, 5);
	return 0;
}

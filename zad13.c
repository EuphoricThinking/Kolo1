#include <stdio.h>
#include <stdbool.h>

int co_najmniej(int tab[], int n) {
	int j;
	for (int j = 0; j<n; j++) {
		int poz = j;
		int contr = 0;
//		printf("\nj%d poz%d ", j, poz);
		while (tab[j] == tab[poz]) {
			poz++;
//			printf("while j%d poz%d\n", j, poz);
			contr++;
		}
//		printf("pozaft%d ", poz);
		if (contr >= 3) {
			return true;
		}
		if (poz!=0) j = poz-1;
	}
	return false;
}

int main(void) {
	int tab[] = {1,2,2,3,3,5};
	for (int i =0; i<6; i++) {
		printf("%d ", tab[i]);
	}
	bool result = co_najmniej(tab, 6);
	printf("\n%d\n", result);
	return 0;
}


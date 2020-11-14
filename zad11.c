#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int tab[] = {2,3,44,5,6,3,6,6};
	int bezdup[8];

	for (int i = 0; i<8; i++) {
		bezdup[i] = 0;
	}

	int poz = 0;
	for (int i = 0; i<8; i++) {
		printf("%d ", tab[i]);
		bool jest = false;
		for (int j = 0; j<8; j++) {
			if (tab[i]==tab[j] && j != i) {
				jest = true;
			}
		}
		if (jest == false) {
			bezdup[poz++] = tab[i];
		}
	}
	printf("\n");
	for (int i = 0; i<8; i++) {
		printf("%d ", bezdup[i]);
	}
	printf("\n");
	return 0;
}

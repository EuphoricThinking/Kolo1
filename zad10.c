#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int tab[8] = {2,2,1,2,3,2,2,2};
	int ile = 0;

	for (int i = 0; i<8; i++) {
		printf("%d ", tab[i]);
		bool jest = false;
		for (int j = 0; j<8; j++) {
			if (tab[j]==tab[i] && j != i) {
				jest = true;
			}
		}
		if (jest == false) {
			ile++;
		}
	}
	printf("\n%d\n", ile);
	return 0;
}


#include <stdio.h>

int main(void) {
//	int tab[] = {1,1,2,3,4,5,5,5,3,2};
	int tab[] = {1,5,2,2,2,5,5,5,2,2};
	for (int i = 0; i<10; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n______\n");

	int freq = 0;
	int liczba;
	int i;
	for (i = 0; i<10; i++) {
		int poz = i;
		int fr = 0;
		printf("%d ", tab[i]);
		while (tab[poz] == tab[i]) {
			fr++;
			poz++;
		}
		if (fr>freq) {
			freq = fr;
			liczba = tab[i];
		}
		i = poz;
	}
	printf("\n%d\n", liczba);
	return 0;
}


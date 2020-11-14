#include <stdio.h>
//Znajdz druga co do wielkosci wartosc z tablicy

int main(void) {
	int tab[] = {319,123,1,77,4,67,319};
	int max1 = 0;
	int max2 = 0;

	for (int i = 0; i<7; i++) {
//		printf("\n%d ", tab[i]);
		if (tab[i]>max1) {
			max2 = max1;
			max1 = tab[i];
		} else if (tab[i]<max1 && tab[i]>max2) {
			max2 = tab[i];
		}

	}

	for (int i = 0; i<7; i++ ) {
		printf("%d ", tab[i]);
	}
	printf("\n%d", max2);
	return 0;
}

#include <stdio.h>
#include <stdbool.h>
//Znajdz wartosc drugiego co do wielkosci elementu tablicy

int main(void) {
	int tab[] = {2,33,56,44,33,44};
	int max = 0;
	int max2 = 0;

	for (int i = 0; i<6; i++) {
		printf("%d ", tab[i]);
		if (tab[i]>=max) {
			max2 = max;
			max = tab[i];
		} else if (tab[i]<max && tab[i]>=max2) {
			max2 = tab[i];
		}
	}
	printf("\n%d\n", max2);
	return 0;
}

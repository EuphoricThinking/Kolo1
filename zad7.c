#include <stdio.h>

int main(void) {
	int tab[] = {4,7,22,6,8,2,67,5};
	int max = 0;
	int min = tab[0];
	for (int i = 0; i<8; i++) {
		printf("%d ", tab[i]);
		if (tab[i]>max) {
			max = tab[i];
		} 
		if (tab[i]<min) {
			min = tab[i];
		}
	}
	printf("\nmax = %d\nmin = %d\n", max, min);
	return 0;
}

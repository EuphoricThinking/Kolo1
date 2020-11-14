#include <stdio.h>
#include <stdbool.h>

int min( int a, int b) {
	if (a<b) return a;
	else return b;
}

bool wzglpier(int tab[], int n) {
	int dziel = 0;
	for (int i = 0; i<n-1; i++) {
		dziel = 0;
		for (int j = i+1; j<n; j++) {
			int lim = min(tab[i], tab[j]);
			for (int k = 1; k<=lim; k++) {
				if (tab[i]%k==0 &&tab[j]%k==0) {
					dziel = k;
				}
			}
			if (dziel == 1) {
				return true;
			}
//		printf("i %d, j %d, dziel %d|ti %d, tj %d\n", i,j,dziel, tab[i], tab[j]);
		}
	}
	return false;
}

int main(void) {
	int tab[] = {4,6,8,10};
	int num = 4;

	bool fu = wzglpier(tab, num);
	printf("%d\n", fu);
	return 0;
}

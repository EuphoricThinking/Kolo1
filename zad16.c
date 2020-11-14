#include <stdio.h>
#include <stdbool.h>

int min(int a, int b) {
	if (a<b) return a;
	else return b;
}

bool wzglnprw(int tab[], int n) {
	int dziel = 0;
	for (int i = 0; i<n-1; i++) {
		for (int j = i+1; j<n; j++) {
			int lim = min(tab[i], tab[j]);
			for (int k = 1; k<=lim; k++) {
				if (tab[j]%k == 0 && tab[i]%k == 0) dziel = k;
			}
		if (dziel != 1) return true;
		}
	}
	return false;
}

int main(void) {
	int tab[] = {1,5,3,7};
	int num = 4;
	bool fu = wzglnprw(tab, num);
	printf("%d\n", fu);
}

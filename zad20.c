#include <stdio.h>

int pos(int a, int b) {
	int dif = a-b;
	if (0>dif) {
		return 0-dif;
	} else {
		return dif;
	}
}

int max_abs(int tab[], int n) {
	int max = 0;
	for (int i = 0; i<n-1; i++) {
		for (int j = i+1; j<n; j++) {
			if (j!=i) {
				int dif = pos(tab[i], tab[j]);
				if (dif>max) max = dif;
			}
		}
	}
	return max;
}

int main(void) {
	int tab[] = {1,2,3,4,-5};
	int num = 5;
	int m = max_abs(tab, 5);
	printf("%d\n", m);
	return 0;
}

#include <stdio.h>

int eukl(int m, int n) {
	if (m == 0) return n;
	return eukl(n%m, n);
}

int eukl_arr(int tab[], int n) {
	int res = tab[0];
	printf("%d\n", res);
	for (int i = 1; i<n; i++) {
		res = eukl(tab[i], res);
		printf("t %d, res %d\n", tab[i], res);
		if (res == 1) return 1;
	}
	return res;
}

int main(void) {
	int tab[] = {18,24,24};
	int num = 3;

	int nwd = eukl_arr(tab, num);

	printf("%d\n", nwd);
	return 0;
}

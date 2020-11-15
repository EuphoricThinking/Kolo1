#include <stdio.h>

int eukl(int m, int n) {
	while (m>=0) {
		if (n%m != 0) {
			int r = n%m;
			m = n;
			n = r;
		} else {
			return m;
		}
	}
	return n;
}

int eukl_arr(int tab[], int n) {
	int res = tab[0];
	printf("%d\n", res);
	for (int i = 1; i<n; i++) {
		res = eukl(res, tab[i]);
		printf("t %d, res %d\n", tab[i], res);
		if (res == 1) return 1;
	}
	return res;
}

int main(void) {
	int tab[] = {2,3,5};
	int num = 3;

	int nwd = eukl_arr(tab, num);

	printf("%d\n", nwd);
	return 0;
}

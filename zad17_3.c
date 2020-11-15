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

int main(void) {
	int m;
	int n;
	scanf("%d %d", &m, &n);
	int nwd = eukl(m,n);
	printf("%d\n", nwd);
	return 0;
}

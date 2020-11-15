#include <stdio.h>

int eukl3(int m, int n) {
	while (m>0) {
		if (m%2==0 && n%2==0) {
			m /= 2;
			n /= 2;
		} else if ((m%2==0 && n%2 != 0)) {
			m /= 2;
		} else if (m%2 != 0 && n%2 == 0) {
			n /= 2;
		} else if (m%2 != 0 && n%2 != 0); {
			int k = m;
			m = n-m;
			n = k;
		}
	}
	return n;
}

int main(void) {
	int m;
	int n;
	scanf("%d %d", &m, &n);
	int nwd = eukl3(m, n);
	printf("%d\n", nwd);
	return 0;
}

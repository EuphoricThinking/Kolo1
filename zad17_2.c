#include <stdio.h>

int eukl(int m, int n) {
	while (m>0) {
		if (m%2==0 && n%2==0) 2*eukl(m/2, n/2);
		else if (m%2==0 && n%2 != 0) eukl(m/2, n);
		else if (m%2 != 0 && n%2 == 0) eukl(m, n/2);
		else if (m%2 !=0 && n%2 != 0) eukl(n-m, m);
	}
	return n;
}

int main(void) {
	int m;
	int n;
	scanf("%d %d", &m, &n);
	int nwd = eukl(m, n);
	printf("%d\n", n);
	return 0;
}

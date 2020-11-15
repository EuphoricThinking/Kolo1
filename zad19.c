#include <stdio.h>

int ekstr(int tab[], int n) {
	int eks = 0;
	for (int i = 2; i<n; i++) {
		if ((tab[i]-tab[i-1])*(tab[i]-tab[i+1])>0) eks++;
	}
	return eks;
}

int main(void) {
	int tab[] = {1,3,2,1,5,6};
	int num = 6;
	int ek = ekstr(tab, num);
	printf("%d\n", ek);
	return 0;
}

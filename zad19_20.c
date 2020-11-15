#include <stdio.h>
#include <stdbool.h>

int max(int a, int b) {
	if (a>b) return a;
	else return b;
}

bool triangle (int a, int b, int c) {
	int sum = a+b+c;
	int m = max(max(a,b), c);
	sum -= m;
	if (sum<m) return true;
	else return false;
}

int tr_tab(int tab[], int n) {
	for (int i =1; i<n-1; i++) {
		if (triangle(tab[i-1], tab[i], tab[i+1]) == false) return false;
	}
	return true;
}

int tab_all(int tab[], int n) {
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			for (int k = 0; k<n; k++) {
				if (k!=j && j!=i && k!=i) {
					if (triangle(tab[k], tab[j], tab[i])==false) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

int main(void) {
	int tab[] = {1,2,4};
	int num = 3;
//	bool t = tr_tab(tab, num);
	bool t = tab_all(tab, num);
	printf("%d\n", t);
	return 0;
}

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

int main(void) {
	int tab[] = {1,2,4,1,6};
	int num = 5;
	bool t = tr_tab(tab, num);
	printf("%d\n", t);
	return 0;
}

#include <stdio.h>
#include <stdbool.h>

int min(int a, int b) {
	if (a>b) return a;
	else return b;
}

bool exact(int p1[], int p2[], int r1, int r2) {
	int lim = min(r1, r2);
	for (int i = 0; i<lim; i++) {
		int mid = i+(lim-i)/2;
		if (i!=lim-1 && (p1[i] == p1[i+1] || p2[i] == p2[i+1])) {
			return true;
		} if (p1[i] == p2[mid]) {
			return true;
		} if (p1[i]<p2[mid]) {
			lim /=2;
			i -= 1;
		} else if (p1[i]>p2[mid]) {
			i = lim/2-1;
		} 
	}
	return false;
}

int main(void) {
	int p1[] = {5,6,7,8,9,10};
	int p2[] = {1,2,3,4,5};
	int r1 = 6;
	int r2 = 5;

	bool t = exact(p1,p2,r1,r2);
	printf("%d", t);
	return 0;
}

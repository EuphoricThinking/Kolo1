#include <stdio.h>
#include <stdbool.h>

bool binsearch(int start, int end, int el, int p2[]) {
	while(start<=end) {
		int mid = start+(end-start)/2;
		if (p2[mid] == el) {
			return true;
		} else if (p2[mid]>el) {
			end = mid-1;
		} else {
			start = mid+1;
		}
	}
	return false;
}

typedef struct tablica {
	int dl;
	int tab[];
} tablica;

tablica max(tablica p1, tablica p2) {
	if (p1.dl>p2.dl) return p1;
	else return p2;
}

tablica min(tablica p1, tablica p2) {
	if (p1.dl<p2.dl) return p1;
	else return p2;
}

bool tab_bin(tablica p1, tablica p2) {
	tablica minima = min(p1, p2);
	tablica maxima = max(p1, p2);

	for (int i = 0; i<minima.dl; i++) {
		if ( i!=maxima.dl-1 && (maxima.tab[i] == maxima.tab[i+1] || minima.tab[i] == minima.tab[i+1])) {
			 return true;
		} else {
			bool t = binsearch(i, maxima.dl-1, minima.tab[i], maxima.tab);
			if (t == true) return true;
		}
	}

	for (int i = minima.dl-1; i<maxima.dl-1; i++) {
		if (maxima.tab[i] == maxima.tab[i+1]) return true;
	}
	return false;
}

int main(void) {
	tablica p1;
	p1.tab[] = {1,2,3,4,5};
	p1.dl = 5;

	tablica p2;
	p2.tab[] = {1,2,3,4,5};
	p2.dl = 5;

	bool t = tab_bin(p1,p2);
	printf("%d\n", t);
	return 0;
}

#include <stdio.h>
#include <stdbool.h>

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

bool search(tablica p1, tablica p2) {
	tablica ma = max(p1, p2);
	tablica mi = min(p1, p2);

	for (int i = 0; i<mi.dl; i++) {
		if (i!=mi.dl-1 &&(mi.tab[i] == mi.tab[i+1] || ma.tab[i] == ma.tab[i+1])) return true;
		for (int j = i; j<ma.dl; j++) {
			if (mi.tab[i] == ma.tab[j]) return true;
		}
	}

	for (int i = mi.dl-1; i<ma.dl-1; i++) {
		if (ma.tab[i] == ma.tab[i+1]) return true;
	}
	return false;
}

int main(void) {
	tablica p1;
	p1.dl = 5;
	p1.tab = {1,2,3,4,5};

	tablica p2;
	p2.dl = 5;
	p2.tab = {1,2,3,4,5};

	bool t = search(p1, p2);
	printf("%d\n", t);
}


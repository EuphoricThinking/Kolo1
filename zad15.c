
#include <stdio.h>

void printer(int tab[], int n) {
	for (int i = 0; i<n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}

void pierwsze(int tab_pierwsze[], int* poz, int rozm_p, int* dzielna, int dziel[]) {
	for (int i = 1; i<rozm_p; i++) {
		if (tab_pierwsze[i] != 0) {
			while (*dzielna%tab_pierwsze[i] == 0) {
				*dziel[*poz++] = *dzielna%tab_pierwsze[i];
				*dzielna/=tab_pierwsze[i];
			}
		}
	*dziel[*poz++] = 1;
}

int main(void) {
	int x;
	scanf("%d", &x);
//	int y;
//	scanf("%d %d", &x, &y);

	int tab[30];
	for (int i = 0; i<30; i++) {
		tab[i] = i+1;
	}
	printer(tab, 30);
	for (int i = 2; i<30; i++) {
		for (int j = 2; i*j<=30; j++) {
			tab[i*j-1] = 0;
		}
	}
	printer(tab, 30);

	int poz = 0;
	int tab_x[10];
	pierwsze(tab, &poz, 30, &x, tab_x);
/*	for (int i = 1; i<30; i++) {
//		printf("%d tab%d ", i, tab[i]);
		if (tab[i] != 0 && x>1) {
			while (x%tab[i] == 0) {
				tab_x[poz++] = tab[i];
				x/=tab[i];
			}
		}
/*		while (x%tab[i]==0 && tab[i] != 0) {
			tab_x[poz++] = x/tab[i];
			x/=tab[i];
		}
		poz++; 
	}

	tab_x[poz++] = 1; */
	for (int i = 0; i<poz; i++) {
		printf("%d*", tab_x[i]);
	}
//	printf("%d %d", x, y);
	return 0;
}

#include <stdio.h>

int main(void) {
	int tab[10] = {1,2,3,4,5,6,7,9,9,10};
	for (int i = 1; i<10; i++) {
		for (int j = 0; j<i; j++) {
			tab[i]+=tab[j];
		}
	}
	for (int i = 9; i>0; i--) {
		for (int j = i-1; j>=0; j--) {
			tab[i]-=tab[j];
		}
	} 
	for (int i = 0; i<10; i++) {
		printf("%d ", tab[i]);
	}
	return 0;
}

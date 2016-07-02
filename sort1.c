#include "sort1.h"

void sort1(int *a, int n) {
	int i,j;
	for (j = 0; j < n-1; j++) {
		int iMin = j;
		for (i = j+1; i < n; i++) {
			if (a[i] < a[iMin]) {
				iMin = i;
			}
		}
		if(iMin != j) {
			int temp = a[iMin];
			a[iMin] = a[j];
			a[j] = temp;
		}
	}
}

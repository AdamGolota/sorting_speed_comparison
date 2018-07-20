#include "sorting_algorithms.h"


int sorting::selection_sort(int arr[], int n) {
	int jter, iter, kter;
	int temp;
	if (n < 0)
		return 1;
	for (iter = 0; iter < n - 1; iter++) {
		kter = iter;
		temp = arr[iter];
		for (jter = iter + 1; jter < n; jter++) {
			if (arr[jter] < temp) {
				kter = jter;
				temp = arr[kter];
			}
		}
		arr[kter] = arr[iter];
		arr[iter] = temp;
	}
	return 0;
}

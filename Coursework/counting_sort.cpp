#include "sorting_algorithms.h"


int sorting::counting_sort(int arr[], int n) {
	int *counters,
		minNegative = 0,
		i, j,
		index,
		size;
	if (n < 1)
		return 1;

	size = arr[0];
	for (i = 0; i < n; i++) {
		if (arr[i] > size)
			size = arr[i];
		if (arr[i] < minNegative)
			minNegative = arr[i];
	}
	size = size - minNegative + 1;
	counters = new int[size] {};
	for (i = 0; i < n; i++)
		counters[arr[i] - minNegative]++;
	index = 0;
	for (i = 0; i < size; i++) {
		for (j = 0; j < counters[i]; j++) {
			arr[index] = i + minNegative;
			index++;
		}
	}
	delete[] counters;
	return 0;
}

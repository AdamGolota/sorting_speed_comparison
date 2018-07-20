#include "sorting_algorithms.h"

int merge(int arr[], int beg, int mid, int end);
int sort(int arr[], int beg, int end);

int sorting::merge_sort(int arr[], int n)
{
	return sort(arr, 0, n - 1);

}


int sort(int arr[], int beg, int end) {
	int mid;

	if (beg < end) {
		mid = (beg + end) / 2;
		sort(arr, beg, mid);
		sort(arr, mid + 1, end);
		return merge(arr, beg, mid, end);
	}

}

int merge(int arr[], int beg, int mid, int end) {
	int i = beg,
		j = mid + 1,
		index = beg,
		k,
		*temp,
		size;
	size = end + 1;
	temp = new int[size];
	if (!temp)
		return 1;
	while ((i <= mid) && (j <= end)) {
		if (arr[i] < arr[j]) {
			temp[index] = arr[i];
			i++;
		}
		else {
			temp[index] = arr[j];
			j++;
		}
		index++;
	}
	if (i > mid) {
		while (j <= end) {
			temp[index] = arr[j];
			j++;
			index++;
		}
	}
	else {
		while (i <= mid) {
			temp[index] = arr[i];
			i++;
			index++;
		}
	}
	for (k = beg; k < index; k++)
		arr[k] = temp[k];
	delete[] temp;
	return 0;
}



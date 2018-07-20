#include "sorting_algorithms.h"
#include "chrono"


int * sorting::generate_array(int n, int range_from, int range_to)
{
	srand(std::chrono::system_clock::now().time_since_epoch().count());
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (range_from - range_to) + range_from;
	}
	return arr;
}

int * sorting::create_copy(int arr[], int n)
{
	int *new_arr = new int[n];
	for (int i = 0; i < n; i++) {
		new_arr[i] = arr[i];
	}
	return new_arr;
}

double sorting::measure_sorting_time(int arr[], int n, sorting_func_t sorting_function)
{
	auto sorting_start_time = std::chrono::system_clock::now();
	(*sorting_function)(arr, n);
	double time = std::chrono::duration<double>(std::chrono::system_clock::now() - sorting_start_time).count();
	return time;
}

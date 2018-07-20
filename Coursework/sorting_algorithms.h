#pragma once


namespace sorting {


	typedef int(*sorting_func_t)(int[], int);

	int* generate_array(int n, int range_from, int range_to);

	int* create_copy(int arr[], int n);

	double measure_sorting_time(int arr[], int n, sorting_func_t);

	// ALGORITHMS

	int merge_sort(int arr[], int n);

	int counting_sort(int arr[], int n);

	int selection_sort(int arr[], int n);

}


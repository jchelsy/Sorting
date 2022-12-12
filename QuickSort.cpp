#include "QuickSort.h"

// Utility function for swapping 2 elements
void swap1(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


/* This function takes the last element as a pivot, places
the pivot element at its correct position in the sorted
array, and places all smaller (smaller than pivot) elements
to the left of the pivot, and greater elements to the right. */
int QuickSort::partition(int arr[], int low, int high)
{
	int pivot = arr[high];  // pivot
	int i = (low - 1);  // index of smaller element

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++;  // increment index of smaller element
			swap1(&arr[i], &arr[j]);
		}
	}
	swap1(&arr[i + 1], &arr[high]);
	return (i + 1);
}


/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low   --> Starting index,
high  --> Ending index
*/
void QuickSort::quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index,
		arr[p] is now at the right place */
		int pi = partition(arr, low, high);

		/* Separately sort elements before
		partition and after partition */
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


/* Method for printing an array */
void QuickSort::printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
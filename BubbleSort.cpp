#include "BubbleSort.h"


// Utility function for swapping 2 elements
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	// TEMP =   #1
	// #1   =   #2
	// #2   =   #1[TEMP]
	// 
	// Thus, swapping #1 with #2
}


/* The main function that implements BubbleSort
arr[] --> Array to be sorted
  n   --> # of elements in array */
void BubbleSort::bubbleSort(int arr[], int n)
{
	int i, j;

	// Loop through the array the amount of the # of elements, MINUS ONE
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)  // ...so it also subtracts i

			if (arr[j] > arr[j + 1])  // IF the current element is greater than the next one
				swap(&arr[j], &arr[j + 1]);  // ...then swap them!
}


/* Method for printing an array */
void BubbleSort::printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
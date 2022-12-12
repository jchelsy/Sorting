#pragma once
#include "BubbleSort.h"


class QuickSort
{
public:
	int partition(int arr[], int low, int high);
	void quickSort(int arr[], int low, int high);
	void printArray(int arr[], int size);
};
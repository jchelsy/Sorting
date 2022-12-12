#include "BubbleSort.h"
#include "QuickSort.h"
#include <ctime>
#include <ratio>
#include <chrono>

#define NUM 10

using namespace chrono;


// Main Method
int main()
{
	int arr[NUM];

	for (int i = 0; i < NUM; i++)
		arr[i] = rand() % 1000; // Generate random values

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "\nProgram...START!!" << endl;
	cout << "Given Array: " << endl;

	BubbleSort b;

	// Show array before sorting
	if (n < 101)
		b.printArray(arr, n);
	else
		// Array is over 100 values
		cout << "The array is too large to print out!" << endl;

	cout << "\n" << endl;
	system("pause");


	cout << "\n\n\t\tBubble Sort...START!" << endl;

	high_resolution_clock::time_point t1 = high_resolution_clock::now();  // Start the timer
	b.bubbleSort(arr, n);
	high_resolution_clock::time_point t2 = high_resolution_clock::now();  // End the timer

	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);  // Calculate how much time passed

	cout << "Sorted Array: \n" << endl;

	// Show the array after being sorted...
	if (n < 101)
		b.printArray(arr, n);
	else
		// Array is over 100 values
		cout << "The array is too large to print out!" << endl;

	cout << "\n" << endl;

	cout << "It took " << time_span.count() << " seconds to run Bubble Sort.\n" << endl;
	system("pause");


	//////////////////////////////////////////////////////////////////////


	for (int i = 0; i < NUM; i++)
	{
		arr[i] = rand() % 1000;
	}

	cout << "\n\n\t\tQuick Sort...START!" << endl;

	QuickSort q;

	high_resolution_clock::time_point t3 = high_resolution_clock::now();  // Start the timer
	q.quickSort(arr, 0, n - 1);
	high_resolution_clock::time_point t4 = high_resolution_clock::now();  // End the timer

	duration<double> time2_span = duration_cast<duration<double>>(t4 - t3);  // Calculate how much time passed

	cout << "Sorted Array: \n" << endl;

	// Show the array after being sorted...
	if (n < 101)
		b.printArray(arr, n);
	else
		// Array is over 100 elements
		cout << "The array is too large to print out!" << endl;

	cout << "\n" << endl;

	cout << "It took " << time2_span.count() << " seconds to run Quick Sort.\n" << endl;
	system("pause");

	return 0;
}
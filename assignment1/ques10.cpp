// 10. Write a program to delete an element from an array.
#include <iostream>
using namespace std;
int findElement(int arr[], int n, int key);
int deleteElement(int arr[], int n, int key)
{
	int pos = findElement(arr, n, key);

	if (pos == -1) {
		cout << "Element not found";
		return n;
	}

	// Deleting element
	int i;
	for (i = pos; i < n - 1; i++)
		arr[i] = arr[i + 1];

	return n - 1;
}

int findElement(int arr[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == key)
			return i;

	return -1;
}

int main()
{
	int i;
	int arr[] = { 10, 50, 30, 40, 20 };

	int n = 5;
	int key = 30;

	cout << "Array before deletion\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";

	n = deleteElement(arr, n, key);

	cout << "\n\nArray after deletion\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}

// This code is contributed by shubhamsingh10

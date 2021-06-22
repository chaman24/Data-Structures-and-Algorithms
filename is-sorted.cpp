#include <iostream>
using namespace std;

int sorted(int arr[], int size) {

	for (int i=0; i<size; ++i)
		if (arr[i+1] < arr[i])
			return false;

	return true;
}

int main() {

	int n;
	cout << "Enter size of the array : ";
	cin >> n;

	int arr[n];

	cout << "Enter elements in the array " << endl;
	for (int i=0; i<n; i++)
		cin >> arr[i]; 

	if (sorted(arr, n))
		cout << "Array is sorted" << endl;

	else
		cout << "Array is not sorted" << endl;
}
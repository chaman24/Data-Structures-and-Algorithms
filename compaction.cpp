#include <iostream>
using namespace std;

int main() {

	int arr[] = {0,2,3,0,4,0,9,1};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = size - 1;
	int j = size, temp;

	while (i >= 0) {

		if (arr[i] != 0) {

			j--;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;	
		}
		i--;
	}

	for (int k=0; k<size; k++)
		cout << arr[k] << " ";
}
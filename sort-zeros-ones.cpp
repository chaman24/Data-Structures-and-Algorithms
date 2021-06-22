#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,0,0,1,0,1,0,0,1,1};
    int i = 0, size = sizeof(arr) / sizeof(arr[0]);
    int temp, j = size - 1;

    while (i < j) {

        if (arr[i] == 0)
            i++;

        else if (arr[j] == 1)
            j--;

        else if (arr[i] == 1 && arr[j] == 0) {

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--; 
        }
    }

    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
}
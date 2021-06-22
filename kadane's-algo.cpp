// It is used to find the maximum sum in the subarray.

#include <iostream>
using namespace std;

int kadane(int arr[], int n) {

    int currentSum = 0, maxSum = INT32_MIN;

    for(int i=0; i<n; i++) {
    
        currentSum += arr[i];

        if (currentSum < 0)
            currentSum = 0;

        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}
int main() {

    int n;
    cout << "Enter number of elements in the array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements : " << endl;
    
    for(int i=0; i<n; i++)
        cin >> arr[i];


    cout <<"Maximum sub array sum is : "<< kadane(arr, n) << endl;
}
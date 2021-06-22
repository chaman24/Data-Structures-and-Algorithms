#include <iostream>
#include <array>
using namespace std;

void pairSum(int arr[],  int sum) {

    int i = 0, j = 7;

    while (i<j) {

        if (arr[i] + arr[j] == sum) {
            cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            i++;
            j--;
        }
        
        else if (arr[i] + arr[j] > sum)
            j--;
        
        else
            i++;
        
    }
}

int main() {

    int my_array[] = {1,2,4,5,8,10,22,23,24}, target;
    cout << "Enter target sum : ";
    cin >> target;

    pairSum(my_array, target);

}


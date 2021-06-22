#include <iostream>
using namespace std;

int main() {

    int arr[] = {4,6,2,3,7,11,15,9,0};
    int currDiff = 2;
    int diff = arr[1] - arr[0];
    int ans = 2, i = 2;

    while (i < 9) {

        if (arr[i] - arr[i-1] == diff)
            currDiff++;


        else {

            diff = arr[i] - arr[i-1];
            currDiff = 2;
        }
        ans = max(ans, currDiff);
        i++;
    }
    cout << ans << endl;
}
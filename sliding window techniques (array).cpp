#include <iostream>
using namespace std;

int slidingWindow(int arr[], int k, int n) {
    int maximum_sum = INT_MIN;

    for(int i = 0; i < n - k + 1; i++) {
        int current_sum = 0;

        for(int j = 0; j < k; j++) {
            current_sum += arr[i + j];
        }

        maximum_sum = max(current_sum, maximum_sum);
    }

    return maximum_sum;
}

int main() {
    int arr[] = {100,200,400,500,200,422};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << slidingWindow(arr,k,n);

    return 0;
}

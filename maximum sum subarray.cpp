#include <iostream>
using namespace std;

// Greedy Approach
long long maximumSumSubarray(int a[], int n) {
    long long sum = 0;
    long long ans = a[1];

    for(int i = 1; i < n; i++) {
        sum += a[i]; // Kenapa di sum karena supaya mencari hasil nilai tambahan dari nilai array yang berdekatan

        if(sum > ans) { // Untuk mengecek jika hasil nilai tambahan lebih besar dari nilai a[i] nya untuk mencari nilai terbesarnya dari penjumlahannya
            ans = sum;
        }

        if(sum < 0) { // Kenapa di cek dibawah 0? Supaya mencari nilainya positif bukannya negatif
            sum = 0;
        }
    }

    return ans;
}

int main() {
    int value[] = {1,2,1,-3,4,5};
    int length = sizeof(value) / sizeof(value[0]);

    cout << maximumSumSubarray(value,length);
    return 0;
}

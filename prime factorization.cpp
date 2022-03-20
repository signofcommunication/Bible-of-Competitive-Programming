#include <iostream>
using namespace std;

int value[100], total[100], index;

void primeFact(int n) {
    if(n == 1) {
        index++;
        value[index] = 2;
        total[index] = 0;
        return;
    }

    int d = 2; // base value for finding the root of n

    while(1LL * d * d <= n && n > 1) {
        int k = 0;
        while(n % d == 0) { // find the root of n value
            k++;
            n /= d; // this operation for finding pre-root value
        }

        if(k > 0) { // this block will execute n % d is equal to 0 which is not prime number
            index++; // navigate the array(global) where the value is will store
            value[index] = d; // store the value
            total[index] = k; // store to index
        }
        d++; // increase by 1 base value for finding root of n
    }

    if(n > 1) { // finding root value for odd number
        index++;
        value[index] = n;
        total[index] = 1;
    }
}

int main() {
    int input{};

    cout << "Enter a number : ";
    cin >> input;

    primeFact(input);

    for(int i = 1; i <= index; i++) {
        cout << value[i] << " " << total[i] << "\n";
    }

    return 0;
}

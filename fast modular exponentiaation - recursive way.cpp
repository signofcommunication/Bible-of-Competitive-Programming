#include <iostream>
using namespace std;

int fastExpo(int a,long long n,int MOD) {
    if(n == 0) {
        return 1;
    }

    // (a ^ n) % MOD / Even
    if(n % 2 == 0) {
        // a ^ n = ((a ^ 2) ^ (n / 2))
        int even = fastExpo((1LL * a * a) % MOD, (n / 2), MOD);
        cout << "This is even conditional -> " << even << endl;
        return even;
    }

    int odd = fastExpo(a, n - 1, MOD);
    cout << "This is odd conditional -> " << odd << endl;
    // Odd
    // a ^ n = a * (a ^  (n - 1))
    return (1LL * a * odd) % MOD;
}

int main() {
    cout << fastExpo(2,5,13);
    return 0;
}

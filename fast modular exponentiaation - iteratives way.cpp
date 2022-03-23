#include <iostream>
using namespace std;

int fastExpo(int a, long long n, int MOD) {
    int ans = 1;

    while(n >= 1) {
        if(n % 2 == 0) {
            a = (1LL * a * a) % MOD;
            n /= 2;
        } else {
            ans = (1LL * ans * a) % MOD;
            n--;
        }
    }
    return ans;
}

int main() {
    cout << fastExpo(2,5,13);
    return 0;
}

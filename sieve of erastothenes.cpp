#include <iostream>
using namespace std;

const int Nmax = 21;

bool isPrime[Nmax];

void sieveOfEratosthenes(int n) {
    for(int i = 2; i <= n; i++) {
        isPrime[i] = true;
    }
    for(int i = 2; i < n / 2; i++) {
        if(isPrime[i] == true) {
            for(int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    sieveOfEratosthenes(10);
    for(int i = 2; i <= 10; i++) {
        if(isPrime[i] == true) {
            cout << i << " ";
        }
    }
    return 0;
}

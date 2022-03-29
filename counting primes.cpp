#include <iostream>
using namespace std;

bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int countPrimes(int n) {
    int total = 0;

    for(int i = 2; i < n; i++) {
        if(isPrime(i)) {
            total++;
        }
    }

    return total;
}

int main() {
    cout << countPrimes(0);
    return 0;
}

/*
class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;

        bool primes[n];
        int i, j, count = 0;

        for(i = 2; i < n; i++){
            primes[i] = true;
        }

        for(i = 2; i <= sqrt(n); i++){
            if(primes[i]){
                for(j = i+i; j < n; j += i)
                    primes[j] = false;
            }
        }

        for(i = 2; i < n; i++)
            if(primes[i])
                count++;

        return count;
    }
};
*/

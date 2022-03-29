#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double pow(double x,int n) {
       assert(x > 0);

       double y = 1.0;

       for(int i = 0; i < n; i++) {
            y *= x;
       }

       for(int i = 0; i > n; i--) {
            y /= x;
       }

       return y;
}

int main() {
    cout << pow(2,5) << endl;
    cout << pow(2.10000,3);
    return 0;
}

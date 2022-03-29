#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double power(double x,int n) {
       assert(x > 0);

       double y = 1.0; // variable for counting fraction values 1.2,3.000 and etcc

       for(int i = 0; i < n; i++) { // looping for finding power
            y *= x;
       }

       for(int i = 0; i > n; i--) { // looping for  minus -n value
            y /= x;
       }

       return y;
}

int main() {
    cout << power(2.00000,-2) << endl;
    return 0;
}

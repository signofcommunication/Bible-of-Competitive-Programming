#include <iostream>
using namespace std;

int a[] = {10,5,20,40};

void updateArr(int x,int y, int z) {
    for(int i = x; i <= y; i++) {
        a[i] = a[i] + z;
    }
}

int main() {
    int length = sizeof(a) / sizeof(a[1]);

    updateArr(0,1,10);
    updateArr(1,3,20);
    updateArr(2,2,30);

    for(int i = 0; i < length; i++) {
            cout << a[i] << " ";
    }

    return 0;
}

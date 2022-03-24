#include <iostream>
using namespace std;

const int Nmax = 100005;

int fr[Nmax];

void pigeonHole(int n) {
    int currentReminder = 0;

    for(int i = 1; i <= n; i++) {
        currentReminder = (currentReminder * 10 + 1) % n;

        if(currentReminder == 0) {
            for(int j = 1; j <= i; j++) {
                cout << 1 << endl;
            }
            return;
        }

        if(fr[currentReminder] != 0) {
                for(int j = 1; j <= (i - fr[currentReminder]); j++) {
                    cout << 1 << endl;
                }
                for(int j = 1; j <= (fr[currentReminder]); j++) {
                    cout << 0 << endl;
                }
        }
        fr[currentReminder] = i;
    }
}

int main() {
    pigeonHole(20);
    return 0;
}

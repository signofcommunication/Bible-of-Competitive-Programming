#include <iostream>
#include <sstream>
#include <limits>
using namespace std;

string highAndLow(const string &numbers)
{
    stringstream ss(numbers);
    int temp, min = numeric_limits<int>::max(), max = numeric_limits<int>::min();

    while (ss >> temp)
    {
        min = (temp < min) ? temp : min;
        max = (temp > max) ? temp : max;
    }

    return to_string(max) + " " + to_string(min);
}

int main()
{
    cout << highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4");
    return 0;
}

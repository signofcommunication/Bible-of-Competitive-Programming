#include <iostream>
#include <numeric>
using namespace std;

int arraySum(int a[], int n)
{
    int initial_sum = 0;
    return accumulate(a, a + n, initial_sum);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arraySum(arr, n);
    return 0;
}

// Vector Solution
// int arraySum(vector<int> &v)
// {
//     int initial_sum = 0;
//     return accumulate(v.begin(), v.end(), initial_sum);
// }

// int simpleArraySum(vector<int> ar)
// {
//     return arraySum(ar);
// }

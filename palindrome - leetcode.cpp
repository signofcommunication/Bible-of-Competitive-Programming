#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    string result;
    string before;
    stringstream res;
    stringstream bf;
    res << x;
    res >> result;
    bf << x;
    bf >> before;

    reverse(result.begin(),result.end());

    if(before == result) {
        return true;
    }

    return false;
}

int main() {
    isPalindrome(15) ? cout << "Yes\n" : cout << "No\n";
    isPalindrome(-121) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}

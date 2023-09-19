#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1,str2;
	cout << "Enter first number : ";
	cin >> str1;
	cout << "Enter Second Number : ";
	cin >> str2;
	int num1 = stoi(str1);
	int num2 = stoi(str2);
	int sum = num1 + num2;
	
	cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;

	return 0;
}

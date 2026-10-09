//Program Title: Program to calculate Sum of first 50 natural numbers
//Name:Muhammad Usman Khurram
//Registration number:L1F25BSCS0008
//Assignment number:1
#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 1; i <= 50; i++) {
		sum = sum + i;
	}
	cout << "Sum of first 50 natural number=" << sum << endl;
}

// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Recursion Example #5
// Problem statement- http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
// Mian.cpp


#include<iostream>
#include<math.h>
using namespace std;

// function template
int polynomial_print(int i, int n, int j);

// global variable to keep track of the sum of the series
int sum = 0;

// main function
int main()
{
	int i, j, n;
	cout << "Please input the value of X:- ";
	cin >> i;
	cout << endl;
	cout << "Please input another number:- ";
	cin >> n;

	int answer = polynomial_print(i, n, 0);  // function call
	cout << "Sum is:- " << answer << endl;

	cout << endl;
	system("pause");
	return 0;
}

// polynomial_print function
int polynomial_print(int i, int n, int j)
{
	if (j < n)
	{
		polynomial_print(i, n, j + 1);
		sum = sum + pow(i, j);
	}
	return sum;
}
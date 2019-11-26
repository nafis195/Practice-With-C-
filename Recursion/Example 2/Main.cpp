// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Recursion Example #2
// Problem statement- http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
// Main.cpp


#include<iostream>
using namespace std;

// function template
void array_print(int i, int n, int* A);

// main function
int main()
{
	int i, n, A[10];
	cout << "Please enter the number:- " << endl;
	cin >> n;

	// inputting the numbers
	for (i = 0; i < n; i++)
		cin >> A[i];

	array_print(0, n - 1, A);  // function call

	system("pause");
	return 0;
}

// array_print function
void array_print(int i, int n, int A[])
{
	if (i <= n)
	{
		cout << A[i] << ' ' << A[n] << endl;
		array_print(i + 1, n - 1, A);
	}
}

// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Recursion Example #3
// Problem statement- http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
// Main.cpp


#include<iostream>
using namespace std;

// function prototype
void print_even_numbers(int i, int n, int* A);

// main function
int main()
{
	int i, n, A[10];
	cout << "Please enter a number:- " << endl;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> A[i];

	print_even_numbers(0, n, A);  // function call

	cout << endl;
	system("pause");
	return 0;
}

// print_even_numbers function
void print_even_numbers(int i, int n, int A[])
{
	if (i < n)
	{
		if (A[i] % 2 == 0)
		{
			cout << A[i] << ' ';
			print_even_numbers(i + 1, n, A);
		}
		else
			print_even_numbers(i + 1, n, A);
	}
}
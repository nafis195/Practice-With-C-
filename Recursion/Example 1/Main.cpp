// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Recursion Example #1
// Problem statement- http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
// Main.cpp


#include<iostream>
using namespace std;

// function prototype
void print(int *A, int n, int i);

// main function
int main()
{
	int n, i, A[10];
	cout << "Please input how many number:- " << endl;
	cin >> n;

	for (i = 0; i < n; i++)
		cin >> A[i];

	print(A, n, 0);  // function call

	cout << endl;
	system("pause");
	return 0;
}

// print function
void print(int *A, int n, int i)
{
	if (i < n)
	{
		print(A, n, i + 1);
		cout << A[i] << ' ';
	}
	else
		return;
}

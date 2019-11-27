// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Recursion Example #4
// Problem statement- http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
// Main.cpp


#include<iostream>
using namespace std;

// function prototype
void polynomial(int i, int n);

// main function
int main()
{
	int i, n;
	cout << "Please enter the number:- " << endl;
	cin >> n;

	polynomial(0, n);  // function call

	cout << endl;
	system("pause");
	return 0;
}

// polynomial function
void polynomial(int i, int n)
{
	if (i < n)
	{
		if (i == 0)
		{
			cout << "1";
			polynomial(i + 1, n);
		}
		else if (i == 1)
		{
			cout << " + X";
			polynomial(i + 1, n);
		}
		else
		{
			cout << " + X^" << i;
			polynomial(i + 1, n);
		}
	}
}
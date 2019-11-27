// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Recursion Example #6
// Problem statement- http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
// Main.cpp


#include<iostream>
using namespace std;

// function template
int factorial(int i);

// main function
int main()
{
	int i, answer;
	cout << "Please enter a number:- ";
	cin >> i;

	answer = factorial(i);  // function call
	cout << "Factorial is:- " << answer;

	cout << endl;
	system("pause");
	return 0;
}

// factorial function
int factorial(int i)
{
	if (i == 0 || i == 1)
		return 1;
	else
		return i * factorial(i - 1);
}
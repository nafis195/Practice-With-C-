// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Recursion Example #8
// Problem statement- http://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
// Main.cpp


#include<iostream>
using namespace std;

// function template
bool prime(int userInput, int i);

// main function
int main()
{
	int userInput;
	cout << "Please input an integer:- ";
	cin >> userInput;

	if (prime(userInput, 2))
		cout << "Prime" << endl;
	else
		cout << "Not prime" << endl;

	cout << endl;
	system("pause");
	return 0;
}

// prime function
bool prime(int userInput, int i)
{
	if (userInput <= i)
		return true;
	if (userInput % i == 0)
		return false;
	if (i * i > userInput)
		return true;
	prime(userInput, i + 1);
}
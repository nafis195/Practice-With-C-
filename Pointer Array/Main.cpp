// Bismillahir Rahmanir Rahim
// Pointer Array
// Main.cpp


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct item
{
	int id;
	string name;
	item* next;
};

int main()
{
	int idNum;
	string stName;
	item* pointerArray[3];

	for(int i = 0; i <= 2; i++)
	{
		pointerArray[i] = new item();
		cin >> idNum;
		pointerArray[i]->id = idNum;
		cin >> stName;
		pointerArray[i]->name = stName;
		pointerArray[i]->next = NULL;
	}

	for(int i = 0; i <= 2; i++)
	{
		cout << pointerArray[i]->id << ' ' << pointerArray[i]->name << endl;
	}

	system("pause");
	return 0;
}
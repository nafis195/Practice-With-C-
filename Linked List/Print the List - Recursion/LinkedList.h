// Bismillahir Rahmanir Rahim
// Nafis Khan Chowdhury
// Print the Linked List - Recursion
// LinkedList.h





#pragma once
#include<iostream>
using namespace std;


class SNode
{
public:
	int data;
	SNode* next;
};


class LinkedList
{
private:
	SNode* head;

public:
	LinkedList() : head(nullptr) {}
	void addList(int value);
	void printList();
};
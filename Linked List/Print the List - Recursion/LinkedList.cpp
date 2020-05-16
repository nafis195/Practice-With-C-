// Bismillahir Rahmanir Rahim
// Nafis Khan Chowdhury
// Print the Linked List - Recursion
// LinkedList.cpp






#include"LinkedList.h"


void LinkedList::addList(int value)
{
	SNode* current = new SNode();
	current->data = value;
	current->next = nullptr;

	if (head == NULL)
		head = current;
	else
	{
		SNode* temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = current;
	}
}


void LinkedList::printList()
{
	SNode* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}
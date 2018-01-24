#include "LinkedListIterator.h"
#include <assert.h>
#include "LinkListType.h"
#include <iostream>
int main()
{
	NodeType<int> *a =  new NodeType<int>{ 12 };
	NodeType<int> b = { 13 };
	NodeType<int> c = { 14 };
	a->link = &b;
	b.link = &c;
	c.link = NULL;
	LinkListIterator<int> iter = LinkListIterator<int>(a);
	iter.operator++();
	LinkListType<int> *listOne = new LinkListType<int>();
	LinkListType<int> *listTwo = new LinkListType<int>();
	listOne->InsertFirst(1);
	listOne->InsertFirst(2);
	listOne->InsertFirst(3);
	listOne->InsertFirst(4);
	listOne->InsertFirst(5);
	listOne->Print();
	listOne->DeleteNode(3);
	listOne->Print();

	assert(a->link == &b);
	assert(b.link == &c);
	assert(c.link == NULL);
	assert(iter.operator*() == 12);
	assert(listOne->Length() == 5);
	assert(listOne->Front() == 5);
	assert(listOne->Back() == 1);
	assert(listOne->Search(3) == 3);
	system("pause");
}
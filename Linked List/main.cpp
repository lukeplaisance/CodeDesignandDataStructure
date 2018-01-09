#include "LinkedListIterator.h"
#include <assert.h>
#include "LinkListType.h"
#include <iostream>
int main()
{
	NodeType<int> a = { 12 };
	NodeType<int> b = { 13 };
	NodeType<int> c = { 14 };
	a.link = &b;
	b.link = &c;
	c.link = NULL;
	LinkListIterator<int> iter = LinkListIterator<int>(&a);
	iter.operator++();
	LinkListType<int> *listOne = new LinkListType<int>();
	listOne->InsertFirst(1);
	listOne->InsertFirst(2);
	listOne->InsertFirst(3);
	listOne->InsertFirst(4);
	listOne->InsertFirst(5);
	listOne->Print();
	LinkListType<int> *listTwo = new LinkListType<int>();
	listTwo->CopyList(*listOne);
	system("pause");
}
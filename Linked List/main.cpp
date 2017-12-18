#include "LinkedListIterator.h"
#include <assert.h>
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
}
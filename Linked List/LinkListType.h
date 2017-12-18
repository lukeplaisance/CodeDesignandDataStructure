#pragma once
#include "NodeType.h"
#include "LinkedListIterator.h"

template<class Type>
class LinkListType
{
protected:
	int count; //variable to sotre the number of elements in the list
	NodeType<Type> *first; //pointer to the first node of the list
	NodeType<Type> *last; //pointer to the last node of the list
public:
	//Overload the assignment operator
	const LinkListType<Type>& operator=(const LinkedListType<Type>&);
	//Initilizes the the list to an empty state
	//PostCondition: first = NULL, last = NULL, count = 0
	void InitializeList();
	//function to determin where the list is empty
	//PostCondition: returns true if the list is empty otherwise it returns false
	bool IsEmptyList()
	{
		return first == NULL;
	}
	//function to return the number of nodes in the list
	//Postcondition: none
	void const Print()
	{
		NodeType<Type> *temp = first;
		while(temp != NULL)
		{
			std::cout << temp->info << std::endl;
			temp = temp->link;
		}
	}
	//function to return the length of the nodes in the list
	//Postcondition: none
	int Length();
	//function to delete all the nodes from the list
	//PostCondition: first = NULL, last = NULL, count = 0
	void DestroyLsit()
	{
		NodeType<Type> *temp = first;
		while(temp != NULL)
		{

		}
	}
	//function to return the first element of the list
	//Precondition: the must exist and must not be empty
	//Postcondition: if the list is empty, the program terminates; otherwise, the first
	//element of the list is returned
	Type Front();
	//function to return the last element of the list
	//Precondition: the must exist and must not be empty
	//Postcondition: if the list is empty, the program terminates; otherwise, the last
	//element of the list is returned
	Type Back();
	//function to determine whether searchItem is on the list
	//Postcondition: returns true if searchItem is in the list, otherwise the value
	//false is returned
	bool Search(const Type&) const;
	//function to insert newItem at the begining of the list
	//Postcondition: first points to the nw list, newItem is inserted at the beginning
	//of the list
	//last points of the lastr node in the list, and count in incremented by 1
	void InsertFirst(const Type&);
	//function to insert newItem at the end of the list
	//Postcondition: first points to the nw list, newItem is inserted at the end
	//of the list
	//last points of the lastr node in the list, and count in incremented by 1
	void InsertLast(const Type&);
	//function to delete deleteItem form the list
	//Precondition: if found, the node containing deleteItem form the list. First
	// points to the first node, list point to the last node of the updated list,
	//and counts is decremented by 1
	void DeleteNode(const Type&);
	//function to return an iterator at the begining of the linked list
	//Postcondition: returns and iterator such that curent is set to first
	LinkListIterator<Type> Begin();
	//function to return an iterator at the end of the linked list
	//Postcondition: returns and iterator such that curent is set to last
	LinkListIterator<Type> End();
	//Default Constructor
	//Initializes the last to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0
	LinkListType()
	{
		first = last = NULL;
		count = 0;
	}
	//copy constructor
	LinkListType(const LinkListType<Type>&);
	//destructor
	//deletes all the nodes from the list
	//Postcondition: the list object is destroyed
	~LinkListType();
private:
	//function to make a copy of otherList
	//Postcondition: a copy of otherList is created and assigned to this list
	void CopyList(const LinkListType<Type>&);
};
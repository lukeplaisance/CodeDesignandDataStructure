#include <iostream>
#include <assert.h>
#include "Cell.h"

// Find the largest value in the set
int SearchLargest(int* collection, int numItems)
{
	if (numItems <= 0) {
		return NULL;
	}
	int largestNum = collection[0];
	for(int i = 0; i < numItems; i++)
	{
		if(collection[i] > largestNum)
		{
			largestNum = collection[i];
		}
	}
	return largestNum;
}

int main()
{
	int numbers[5] = { 1, -3, 4, 100, -100 };
	assert(SearchLargest(numbers, 5) == 100);
	Cell testOne = Cell('T');
	Cell testTwo = Cell('4');
	assert(testOne == testTwo);



	system("pause");
}
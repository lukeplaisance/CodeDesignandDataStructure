#include <iostream>
#include <assert.h>

template <typename T>
T Add(T a, T b)
{
	return a + b;
}

//overloading the multiplication operator
//typename M
//arguemetns: lhs, rhs
template <typename M>
M operator*(M lhs, M rhs)
{
	return lhs * rhs;
}


int main()
{
	int a = Add(5, 7);
	float b = Add(5.0f, 7.0f);
	char c = Add('g', 'f');
}
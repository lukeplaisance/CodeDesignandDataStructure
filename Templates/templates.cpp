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

template<typename T>
class Node
{
public:
	T m_Data;
	Node(){
		m_Data = 0;
	}

	Node(T data) {
		m_Data = data;
	}

	bool operator==(Node<T> other){
		return m_Data == other.m_Data;
	}

	bool operator!=(Node<T> other){
		return m_Data != other.m_Data;
	}
};


int main()
{
	int a = Add(5, 7);
	float b = Add(5.0f, 7.0f);
	char c = Add('g', 'f');
}
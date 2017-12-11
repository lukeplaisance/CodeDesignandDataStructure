#include "ConnectFour.h"
#include <iostream>
ConnectFour::ConnectFour()
{
	m_NumCols = 7;
	m_ColHeight = 6;
}

ConnectFour::ConnectFour(int numCols, int colHeight)
{
	m_NumCols = numCols;
	m_ColHeight = colHeight;
	m_Columns = new Column;
}

bool ConnectFour::Update()
{
	std::cout << "pick a column" << std::endl;

}

bool ConnectFour::PlacePiece(int col)
{
	if(!m_Columns->IsFull())
	{
		m_Columns->PlaceToken(col);
	}
}

bool ConnectFour::CheckVictory()
{
	//Horizontal
	for(int i = 0; i < m_NumCols; i++)
	{
		if(m_ActiveToken)
	}

}

void ConnectFour::PrintBoard()
{
}

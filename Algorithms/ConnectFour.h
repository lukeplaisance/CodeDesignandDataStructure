#pragma once
#include "Column.h"
#include "Cell.h"
class ConnectFour
{
public:
	Column* m_Columns;
	char m_ActiveToken;
	int m_NumCols;
	int m_ColHeight;
	ConnectFour(int numCols, int colHeight);
	ConnectFour();
	bool Update();
	bool PlacePiece(int col);
	bool CheckVictory();
	void PrintBoard();
};
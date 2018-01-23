#include "ConnectFour.h"
#include <iostream>
using namespace std;
ConnectFour::ConnectFour()
{
	m_NumCols = 7;
	m_ColHeight = 6;
}

ConnectFour::ConnectFour(int numCols, int colHeight)
{
	m_NumCols = numCols;
	m_ColHeight = colHeight;
	m_Columns = new Column[numCols];
}

bool ConnectFour::Update()
{

	return true;
}

void ConnectFour::UpdatePlayerOne()
{
	m_ActiveToken = 'X';
	int input;
	cout << "it is " << m_ActiveToken << "'s turn\n";
	cin >> input;
	while(input > m_NumCols - 1)
	{
		cout << "The number you inputted is not compatible\n";
		cout << "select a column\n";
		cin >> input;
	}
	PlacePiece(input);
}

void ConnectFour::UpdatePlayerTwo()
{
	m_ActiveToken = 'O';
	int input;
	cout << "it is " << m_ActiveToken << "'s turn\n";
	cin >> input;
	while (input > m_NumCols - 1)
	{
		cout << "The number you inputted is not compatible\n";
		cout << "select a column\n";
		cin >> input;
	}
	PlacePiece(input);
}

bool ConnectFour::PlacePiece(int col)
{
	return m_Columns[col].PlaceToken(m_ActiveToken);
}

void ConnectFour::CheckVictory()
{
	//Horizontal
	for(int i = 0; i < m_NumCols; i++)
	{
		for(int x = 0; x < m_ColHeight; x++)
		{
				//Horizontal
			if ((m_Columns[i].m_Cells[x] == m_Columns[i + 1].m_Cells[x] &&
				m_Columns[i + 1].m_Cells[x] == m_Columns[i + 2].m_Cells[x] &&
				m_Columns[i + 2].m_Cells[x] == m_Columns[i + 3].m_Cells[x]) ||
				//Vertical
				(m_Columns[i].m_Cells[x] == m_Columns[i].m_Cells[x + 1] &&
				m_Columns[i].m_Cells[x + 1] == m_Columns[i].m_Cells[x + 2] &&
				m_Columns[i].m_Cells[x + 2] == m_Columns[i].m_Cells[x + 3]))
			{
				PrintBoard();
				cout << "Player" << m_ActiveToken << "wins\n";
				cout << endl;
				system("pause");
				system("cls");
			}
		}
	}

}

void ConnectFour::PrintBoard()
{
	for(int i = m_ColHeight - 1; i >= 0; i--)
	{
		for(int j = 0; j < m_NumCols; j++)
		{
			cout << "(" << m_Columns[j].m_Cells[i].m_Token << ")";
		}
		cout << std::endl;
	}
	int count = 0;
	while(count <= m_NumCols - 1)
	{
		cout << " " << count << " ";
		count++;
	}
	cout << endl;
	cout << endl;
}

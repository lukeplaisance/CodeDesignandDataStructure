#include "Column.h"

Column::Column()
{
}

Column::Column(int height)
{
	m_Height = height;
}

bool Column::PlaceToken(char token)
{
	if(IsFull())
	{
		m_Cells->m_Token = token;
		return true;
	}
	return false;
}

bool Column::IsFull()
{
	if(m_LastOccupied >= m_Height)
	{
		return true;
	}
	return false;
}

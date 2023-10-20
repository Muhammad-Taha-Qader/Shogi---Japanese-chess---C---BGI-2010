#pragma once
#include "Piece.h"

#include<iostream>
#include "Header.h"
using namespace std;
class King :
	public Piece
{
	bool IsFirstMove;
public:
	King(int _r, int _c, Colour _C, Board* _b, char Name);
	virtual bool IsValidMove(int er, int ec);
	virtual void Draw(int r, int c, THEMES _THEME, const int displayBoxGenericSize);

	virtual void DDraw()
	{
		//gotoRowCol(ri,ci);
		cout << ((C == _BLACK) ? 'k' : 'K');
	}

};


#pragma once
#include "Piece.h"
#include<iostream>
#include "Header.h"
using namespace std;
class Knight :
	public Piece
{
	bool IsFirstMove;
public:
	Knight(int _r, int _c, Colour _C, Board* _b, char Name);
	virtual bool IsValidMove(int er, int ec);
	virtual void Draw(int r, int c, THEMES _THEME, const int displayBoxGenericSize);
	//{
	//	//gotoRowCol(ri,ci);
	//	cout << ((C == _BLACK) ? 'h' : 'H');
	//	settextstyle(5, 0, 0);
	//	(C == _BLACK) ? outtextxy(r, c, "h") : outtextxy(r, c, "H");
	//}
	virtual void DDraw()
	{
		//gotoRowCol(ri,ci);
		cout << ((C == _BLACK) ? 'h' : 'H');
	}
};



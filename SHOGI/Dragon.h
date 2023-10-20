#pragma once
#include "Piece.h"
#include<iostream>
#include "Header.h"
using namespace std;
class Dragon :             //promoted rook
    public Piece
{
	bool IsFirstMove;
public:
	Dragon(int _r, int _c, Colour _C, Board* _b, char Name);
	virtual bool IsValidMove(int dr, int dc);
	virtual void Draw(int c, int r, THEMES _THEME, const int displayBoxGenericSize);
	//{
	//	//gotoRowCol(ri,ci);
	//	cout << ((C == _BLACK) ? 'r' : 'R');

	//	settextstyle(5, 0, 0);
	//	(C == _BLACK) ? outtextxy(r, c, "r") : outtextxy(r, c, "R");
	//}
	virtual void DDraw()
	{
		//gotoRowCol(ri,ci);
		cout << ((C == _BLACK) ? 'd' : 'D');
	}
};


#pragma once
#include<iostream>
#include "Header.h"
using namespace std;
#include "Piece.h"
class Silver :
	public Piece
{
	bool IsFirstMove;
public:
	Silver(int _r, int _c, Colour _C, Board* _b, char Name);
	virtual bool IsValidMove(int er, int ec);
	virtual void Draw(int r, int c, THEMES _THEM, const int displayBoxGenericSizeE);
	//{
	//	//gotoRowCol(ri,ci);
	//	cout << ((C == _BLACK) ? 's' : 'S');
	//	settextstyle(5, 0, 0);
	//	(C == _BLACK) ? outtextxy(r, c, "s") : outtextxy(r, c, "S");
	//}
	virtual void DDraw()
	{
		//gotoRowCol(ri,ci);
		cout << ((C == _BLACK) ? 's' : 'S');
	}

};


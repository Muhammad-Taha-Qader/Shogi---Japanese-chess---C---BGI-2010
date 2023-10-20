#pragma once
#include<iostream>
#include "Piece.h"
#include "Header.h"
using namespace std;
class Pawn : public Piece
{
	bool IsFirstMove;
public:
	Pawn(int _r, int _c, Colour _C, Board* _b, char Name);
	virtual bool IsValidMove(int er, int ec);
	virtual void Draw(int c, int r, THEMES _THEME, const int displayBoxGenericSize);
	//{
	//	//gotoRowCol(ri,ci);
	//	cout << ((C == _BLACK) ? 'p' : 'P');
	//		settextstyle(5, 0, 0);
	//		(C == _BLACK) ? outtextxy(r, c, "p") : outtextxy(r, c, "P");

	//}
	virtual void DDraw()
	{
		//gotoRowCol(ri,ci);


		cout << ((C == _BLACK) ? 'p' : 'P');
	}


};


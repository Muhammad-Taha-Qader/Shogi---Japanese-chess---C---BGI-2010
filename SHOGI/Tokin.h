#pragma once
#include "Piece.h"

#include<iostream>
#include "Header.h"
using namespace std;
class Tokin :   //TOKIN == Promoted PAWN
    public Piece
{
	//	bool IsFirstMove;
public:
	Tokin(int _r, int _c, Colour _C, Board* _b, char Name);
	virtual bool IsValidMove(int er, int ec);
	virtual void Draw(int r, int c, THEMES _THEM, const int displayBoxGenericSize);
	//{
	//	//gotoRowCol(ri,ci);
	//	cout << ((C == _BLACK) ? 'g' : 'G');

	//	settextstyle(5, 0, 0);
	//	(C == _BLACK) ? outtextxy(r, c, "g") : outtextxy(r, c, "G");
	//}
	virtual void DDraw()
	{
		//gotoRowCol(ri,ci);
		cout << ((C == _BLACK) ? 't' : 'T');
	}
};


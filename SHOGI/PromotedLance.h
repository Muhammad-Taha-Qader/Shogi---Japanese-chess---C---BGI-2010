#pragma once
#include "Piece.h"
#include<iostream>
#include "Header.h"
using namespace std;
class PromotedLance :
    public Piece
{
	//	bool IsFirstMove;
public:
	PromotedLance(int _r, int _c, Colour _C, Board* _b, char Name);
	virtual bool IsValidMove(int er, int ec);
	virtual void Draw(int c, int r, THEMES _THEME, const int displayBoxGenericSize);

	virtual void DDraw()
	{
		cout << ((C == _BLACK) ? 'm' : 'M');
	}
};


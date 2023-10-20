#pragma once
#include<math.h>
#include"Header.h"
#include<iostream>
#include<fstream>
#include<string.h>
//#include"Board.h"
class Board;
class Piece
{
protected:
	int ri, ci;
	Colour C;
	Board* B;
	char Name;

	bool isHorizontal(int sr, int sc, int dr, int dc)
	{
		return(sr == dr);
	}
	bool isVartical(int sr, int sc, int dr, int dc)
	{
		//(B->getCells())[0][0]->Pptr->Name;
		return(sc == dc);
	}
	bool isDiagonal(int sr, int sc, int dr, int dc)
	{
		int ChnageR = abs(dr - sr);
		int ChnageC = abs(dc - sc);
		return(ChnageR == ChnageC);
	}
	bool HorizontalPathClear(int sr, int sc, int dr, int dc);
	//{
	//	int scol, dcol;
	//	if (dc > sc)
	//	{
	//		scol = sc;
	//		dcol = dc;
	//	}
	//	else
	//	{
	//		scol = dc;
	//		dcol = sc;
	//	}
	///*	for (int col = scol + 1; col < dcol; col++)
	//		if (b[sr][col] != '-')
	//			return false;*/
	//	for (int col = scol + 1; col < dcol; col++)
	//	{
	//		//if ((*((*B).getCells())[sr][col]).Pptr->Name != '-')
	//			if((B->getCells())[0][0]->Pptr->Name !='-')
	//			return false;
	//	}
	//		
	//	return true;
	//}
	// 
	bool VerticalPathClear(int sr, int sc, int dr, int dc);
	//{
	//	int srow, drow;
	//	if (dr > sr)
	//	{
	//		srow = sr;
	//		drow = dr;
	//	}
	//	else
	//	{
	//		srow = dr;
	//		drow = sr;
	//	}
	//	for (int row = srow + 1; row < drow; row++)
	//		if ((*(*B).getCells()[row][sc]).Pptr->Name != '-')
	//			//if (b[row][sc] != '-')
	//			return false;
	//	return true;
	//}

	bool DiagonalPathClear(int sr, int sc, int dr, int dc);
	//{
	//	int jump = abs(dr - sr);
	//	int srow = 0, drow, scol = 0, dcol = 0;
	//	if (((sr - dr) < 0 && (sc - dc) < 0) || ((sr - dr) > 0 && (sc - dc) > 0))
	//	{
	//		if ((sr - dr) > 0 && (sc - dc) > 0)
	//		{
	//			srow = sr;  drow = dr;
	//			scol = sc;  dcol = dc;
	//		}
	//		else
	//			//if ((sr - dr) > 0 && (sc - dc) > 0)
	//		{
	//			srow = dr;  drow = sr;
	//			scol = dc;  dcol = sc;
	//		}
	//		for (int i = 1; i < jump; i++)
	//			//if (b[srow - i][scol - i] != '-')
	//			if ((*(*B).getCells()[srow-i][scol-i]).Pptr->Name != '-')
	//				return false;
	//		return true;
	//	}

	//	if (((sr - dr) < 0 && (sc - dc) > 0) || ((sr - dr) > 0 && (sc - dc) < 0))
	//	{
	//		if ((sr - dr) > 0 && (sc - dc) < 0)
	//		{
	//			srow = sr;  drow = dr;
	//			scol = sc;  dcol = dc;
	//		}
	//		if ((sr - dr) < 0 && (sc - dc) > 0)
	//		{
	//			srow = dr;  drow = sr;
	//			scol = dc;  dcol = sc;
	//		}
	//		for (int i = 1; i < jump; i++)
	//			//if (b[srow - i][scol + i] != '-')
	//			if ((*(*B).getCells()[srow - i][scol +i]).Pptr->Name != '-')
	//				return false;
	//		return true;
	//	}

	//}

public:

	Piece(int r, int c, Colour _c, Board* _b, char N);
	//Piece(const Piece& P);
	//Piece();
	//virtual bool IsValidMove(int er, int ec)=0;
	void Move(int nri, int nci);
	virtual bool IsValidMove(int er, int ec)
	{
		//return true;
		return false;
	}
	//virtual void Draw() = 0;
	virtual void Draw(int r,int c,THEMES _THEME, const int displayBoxGenericSize)
	{
		std::cout << '-';
	}
	virtual void DDraw()
	{
		std::cout << '-';
	}
	int grtR()
	{
		return ri;
	}
	int grtC()
	{
		return ci;
	}
	Colour grtColo()
	{
		return C;
	}
	char grtNam()
	{
		return Name;
	}
	void setR(int R)
	{
		ri=R;
	}
	void setC(int R)
	{
		ci=R;
	}
	void setNam(char R)
	{
		Name=R;
	}
	void setColo(Colour _c)
	{
		C=_c;
	}

	~Piece()
	{
		delete B;
	}

};

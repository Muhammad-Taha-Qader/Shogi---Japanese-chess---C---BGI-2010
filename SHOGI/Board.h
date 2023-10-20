#pragma once
//#include"Piece.h"    //insted use
class Piece;
//#include"Piece.h"
#include"Header.h"
#include<string.h>
#include<string>
#include<fstream>
#include<iostream>
//#include"Cell.h"
class Cell;
//class Pawn;
class Board
{
protected:
	//Piece*** Ps;
	Cell*** Cs;
	int DropW[7]={0,0,0,0,0,0,0};
	int DropB[7]= { 0,0,0,0,0,0,0 };
public:
	Board();
	Board(const Board& B2);
	//void LoadBoard(string file);
	//void LoadBoard(ifstream& rdr);
	void LoadBoard(char* str);
//	Board operator=(const Board& B);
	Cell*** getCells();
	void Print(int i,int j, THEMES _THEME, const int displayBoxGenericSize);
	void DePrint();
	void Move(int r, int c, int nr, int nc);
	const int* getDropW()
	{
		return DropW;
	}
	const int* getDropB()
	{
		return DropB;
	}
	int* SetDropW()
	{
		return DropW;
	}
	int* SetDropB()
	{
		return DropB;
	}
	~Board()
	{

		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				delete[] Cs[i][j];
		delete[]Cs;
	}
};


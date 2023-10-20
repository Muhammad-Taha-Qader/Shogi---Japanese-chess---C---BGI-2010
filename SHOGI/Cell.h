#pragma once
#include "Piece.h"
#include<fstream>
#include<string.h>
class Cell
{
public:
    Piece* Pptr;
    //Piece P;

    bool HighLightBox;

    Cell(Piece* p)
    {
        this->Pptr = &(*p);
        HighLightBox = false;
    }
    Cell(const Cell& C2)
    {
        HighLightBox = C2.HighLightBox;
        Pptr = C2.Pptr;
    }
    //  Cell();
};


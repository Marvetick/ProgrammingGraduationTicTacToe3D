#pragma once
#include <string>
#include <stdio.h>
#include <cstring>
#include "point.h"
using namespace std;

class Board{
private:
	int layer; //0 Front,1 Mid,2 Back
	int table[9] = {0,0,0,0,0,0,0,0,0};
	string tab[3];
public:
	Board(int);
	int getLayer();
	void addPointToTable(Point);
	void setLayer(int);
	void setTable(int[9]);
	int* getTableContent();
};

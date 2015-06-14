#include "board.h"
#include "stdio.h"
using namespace std;
Board::Board(int lay)
{
	layer = lay;
}
int Board::getLayer()
{
	return this->layer;
}
void Board::setLayer(int layer)
{
	this->layer = layer;
}
void Board::addPointToTable(Point pt)
{
	int sign = pt.getSign();
	int x = pt.getX() -1;
	int y = pt.getY() -1;
	if(y == 0 && x == 0)
		table[0] = sign;
	else if(y==0 && x==1)
		table[1] = sign;
	else if(y==0 && x==2)
		table[2] = sign;
	else if(y==1 && x==0)
		table[3] = sign;
	else if(y==1 && x==1)
		table[4] = sign;
	else if(y==1 && x==2)
		table[5] = sign;
	else if(y==2 && x==0)
		table[6] = sign;
	else if(y==2 && x==1)
		table[7] = sign;
	else if(y==2 && x==2)
		table[8] = sign;
}
int* Board::getTableContent()
{
	int tab[9];
	memcpy(tab,table,sizeof(tab));
	return tab;
}

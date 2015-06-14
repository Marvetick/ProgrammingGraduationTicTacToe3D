#include "point.h"
Point::Point(int sig)
{
	sign = sig;
}
Point::Point(int x, int y, int sig)
{
	xCord = x;
	yCord = y;
	sign = sig;
}
Point::Point(int x, int y, int z, int sig)
{
	xCord = x;
	yCord = y;
	zCord = z;
	sign = sig;
}
int Point::getX()
{
	return xCord;
}
int Point::getY()
{
	return yCord;
}
int Point::getZ()
{
	return zCord;
}
int Point::getSign()
{
	return sign;
}
char Point::getSignChar()
{
	char sig;
	if(sign == 1)
		sig = 'X';
	else if(sign == 2)
		sig = 'Y';
	else if(sign == 0)
		sig = ' ';
	return sig;
}
void Point::setX(int x)
{
	xCord = x;
}
void Point::setY(int y)
{
	yCord = y;
}
void Point::setZ(int z)
{
	zCord = z;
}
void Point::setSign(int sig)
{
	sign = sig;
}

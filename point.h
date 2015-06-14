#pragma once
class Point{
private:
	int xCord;
	int yCord;
	int zCord;
	int sign; // 1=> X, 2=> Y
public:
	Point(int);
	Point(int,int,int);
	Point(int,int,int,int);
	int getX();
	int getY();
	int getZ();
	int getSign();
	char getSignChar();
	void setX(int);
	void setY(int);
	void setZ(int);
	void setSign(int);
};

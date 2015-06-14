#include <stdio.h>
#include <iostream>
#include <string>
#include "board.h"
#include "point.h"
bool checkGameState(Board brd1,Board brd2, Board brd3)
{
	bool ret = false;
	int tab1[9];
	int tab2[9];
	int tab3[9];
	memcpy(tab1,brd1.getTableContent(),sizeof(tab1));
	memcpy(tab2,brd2.getTableContent(),sizeof(tab2));
	memcpy(tab3,brd3.getTableContent(),sizeof(tab3));

	if(tab1[0] == tab2[0] && tab2[0] == tab3[0] && tab3[0]!= 0)
		return true;
	if(tab1[1] == tab2[1] && tab2[1] == tab3[1] && tab3[1] != 0)
		return true;
	if(tab1[2] == tab2[2] && tab2[2] == tab3[2] && tab3[2] != 0)
			return true;
	if(tab1[3] == tab2[3] && tab2[3] == tab3[3] && tab3[3] != 0)
			return true;
	if(tab1[4] == tab2[4] && tab2[4] == tab3[4] && tab3[4] != 0)
			return true;
	if(tab1[5] == tab2[5] && tab2[5] == tab3[5] && tab3[5] != 0)
			return true;
	if(tab1[6] == tab2[6] && tab2[6] == tab3[6] && tab3[6] != 0)
			return true;
	if(tab1[7] == tab2[7] && tab2[7] == tab3[7] && tab3[7] != 0)
			return true;
	if(tab1[8] == tab2[8] && tab2[8] == tab3[8] && tab3[8] != 0)
			return true;

	if(tab1[0] == tab2[4] && tab2[4] == tab3[8] && tab3[8] != 0)
			return true;
	if(tab1[6] == tab2[4] && tab2[4] == tab3[2] && tab3[2] != 0)
			return true;
	if(tab1[2] == tab2[4] && tab2[4] == tab3[6] && tab3[6] != 0)
			return true;
	if(tab1[8] == tab2[4] && tab2[4] == tab3[0] && tab3[0] != 0)
			return true;

	if(tab1[2] == tab2[5] && tab2[5] == tab3[8] && tab3[8] != 0)
			return true;
	if(tab1[1] == tab2[4] && tab2[4] == tab3[7] && tab3[7] != 0)
			return true;
	if(tab1[0] == tab2[3] && tab2[3] == tab3[6] && tab3[6] != 0)
			return true;
	if(tab1[8] == tab2[5] && tab2[5] == tab3[2] && tab3[2] != 0)
			return true;
	if(tab1[7] == tab2[4] && tab2[4] == tab3[1] && tab3[1] != 0)
			return true;
	if(tab1[6] == tab2[3] && tab2[3] == tab3[0] && tab3[0] != 0)
			return true;

	if(tab1[0] == tab1[1] && tab1[1] == tab1[2] && tab1[2] != 0)
		return true;
	if(tab1[3] == tab1[4] && tab1[4] == tab1[5] && tab1[5] != 0)
			return true;
	if(tab1[6] == tab1[7] && tab1[7] == tab1[8] && tab1[8] != 0)
			return true;
	if(tab1[0] == tab1[3] && tab1[3] == tab1[6] && tab1[6] != 0)
			return true;
	if(tab1[1] == tab1[4] && tab1[4] == tab1[7] && tab1[7] != 0)
			return true;
	if(tab1[2] == tab1[5] && tab1[5] == tab1[8] && tab1[8] != 0)
			return true;
	if(tab1[0] == tab1[4] && tab1[4] == tab1[8] && tab1[8] != 0)
			return true;
	if(tab1[6] == tab1[4] && tab1[4] == tab1[2] && tab1[2] != 0)
			return true;

	if(tab2[0] == tab2[1] && tab2[1] == tab2[2] && tab2[2] != 0)
			return true;
	if(tab2[3] == tab2[4] && tab2[4] == tab2[5] && tab2[5] != 0)
			return true;
	if(tab2[6] == tab2[7] && tab2[7] == tab2[8] && tab2[8] != 0)
			return true;
	if(tab2[0] == tab2[3] && tab2[3] == tab2[6] && tab2[6] != 0)
			return true;
	if(tab2[1] == tab2[4] && tab2[4] == tab2[7] && tab2[7] != 0)
			return true;
	if(tab2[2] == tab2[5] && tab2[5] == tab2[8] && tab2[8] != 0)
			return true;
	if(tab2[0] == tab2[4] && tab2[4] == tab2[8] && tab2[8] != 0)
			return true;
	if(tab2[6] == tab2[4] && tab2[4] == tab2[2] && tab2[2] != 0)
			return true;

	if(tab3[0] == tab3[1] && tab3[1] == tab3[2] && tab3[2] != 0)
			return true;
	if(tab3[3] == tab3[4] && tab3[4] == tab3[5] && tab3[5] != 0)
			return true;
	if(tab3[6] == tab3[7] && tab3[7] == tab3[8] && tab3[8] != 0)
			return true;
	if(tab3[0] == tab3[3] && tab3[3] == tab3[6] && tab3[6] != 0)
			return true;
	if(tab3[1] == tab3[4] && tab3[4] == tab3[7] && tab3[7] != 0)
			return true;
	if(tab3[2] == tab3[5] && tab3[5] == tab3[8] && tab3[8] != 0)
			return true;
	if(tab3[0] == tab3[4] && tab3[4] == tab3[8] && tab3[8] != 0)
			return true;
	if(tab3[6] == tab3[4] && tab3[4] == tab3[2] && tab3[2] != 0)
			return true;
	return ret;
}
void showDesk(Board brd1, Board brd2, Board brd3)
{
	int tab1[9];
	int tab2[9];
	int tab3[9];
	memcpy(tab1,brd1.getTableContent(),sizeof(tab1));
	memcpy(tab2,brd2.getTableContent(),sizeof(tab2));
	memcpy(tab3,brd3.getTableContent(),sizeof(tab3));

	string desk1[9],desk2[9],desk3[9];
	string arr1[9],arr2[9],arr3[9];
	for(int i = 0; i<9; i++)
	{
		if(tab1[i] == 1)
			arr1[i] = "X";
		else if(tab1[i] == 2)
			arr1[i] = "Y";
		else
			arr1[i] = " ";
		if(tab2[i] == 1)
			arr2[i] = "X";
		else if(tab2[i] == 2)
			arr2[i] = "Y";
		else
			arr2[i] = " ";
		if(tab3[i] == 1)
			arr3[i] = "X";
		else if(tab3[i] == 2)
			arr3[i] = "Y";
		else
			arr3[i] = " ";
	}
	desk1[0] = "\t\t\t\t\t";
	desk1[1] = "\t\t      ";
	desk1[2] = "     ___________      ";
	desk1[3] = "    / " + arr1[0] + " / " + arr1[1] + " / " + arr1[2] + " /    ";
	desk1[4] = "   /-----------/    ";
	desk1[5] = "  / " + arr1[3] + " / " + arr1[4] + " / " + arr1[5] + " /    ";
	desk1[6] = " /-----------/    ";
	desk1[7] = "/ " + arr1[6] + " / " + arr1[7] + " / " + arr1[8] + " /    ";
	desk1[8] = "------------    ";

	desk2[0] = "";
	desk2[1] = " ____________     ";
	desk2[2] = "/ " + arr2[0] + " / " + arr2[1] + " / " + arr2[2] + " /    ";
	desk2[3] = "/-----------/    ";
	desk2[4] = "/ " + arr2[3] + " / " + arr2[4] + " / " + arr2[5] + " /    ";
	desk2[5] = "/-----------/    ";
	desk2[6] = "/ " + arr2[6] + " / " + arr2[7] + " / " + arr2[8] + " /    ";
	desk2[7] = " ------------    ";
	desk2[8] = "";

	desk3[0] = " ____________";
	desk3[1] = "/ " + arr3[0] + " / " + arr3[1] + " / " + arr3[2] + " /";
	desk3[2] = "/-----------/";
	desk3[3] = "/ " + arr3[3] + " / " + arr3[4] + " / " + arr3[5] + " /";
	desk3[4] = "/-----------/";
	desk3[5] = "/ " + arr3[6] + " / " + arr3[7] + " / " + arr3[8] + " /";
	desk3[6] = " ------------";
	desk3[7] = "";
	desk3[8] = "";

	for(int i = 0;i < 9; i++)
	{
		cout << desk1[i];
		cout << desk2[i];
		cout << desk3[i];
		cout << endl;
	}

}
int countOccurrence(string input, char item)
{
  int ret = 0;
  for(int i = 0; i < input.size(); i++)
  {
    if(input[i] == item)
      ret+= 1;
  }
  return ret;
}
int* splitStringIntoIntArr(string input, char del)
{
  int delCt = countOccurrence(input,del);
  int ret[delCt];
  int ix = 0;
  for(int i = 0; i < input.size(); i++)
  {
      if(input[i] != ' ' && input[i] != ',')
      {
        ret[ix] = stoi(string(1,input[i]));
        ix += 1;

      }
  }
  return ret;
}
void doMove(Board brd1, Board brd2, Board brd3, Point pt)
{
	string line;
	cout << "Ruch gracza nr : " << pt.getSign() << endl;
	cout << "Podaj punkt w formacie : x,y,z ." << endl;
	getline(cin, line);

	int* sPoint ={};
	sPoint = splitStringIntoIntArr(line, ',');
	pt.setX(sPoint[0]);
	pt.setY(sPoint[1]);
	pt.setZ(sPoint[2]);

	int pz = pt.getZ();
	if(pz == 1)
		brd1.addPointToTable(pt);
	else if(pz == 2)
		brd2.addPointToTable(pt);
	else if(pz == 3)
	    brd3.addPointToTable(pt);

	showDesk(brd1,brd2,brd3);
	//return brd1,brd2,brd3;
}
void startGame()
{
	int round = 0;
	Board brd1(0);
	Board brd2(1);
	Board brd3(2);
	Point p1(1);
	Point p2(2);
	while(checkGameState(brd1,brd2,brd3) == false)
	{
		string line;
		if(round%2 == 0)
		{
			cout << "Ruch gracza nr : " << p1.getSign() << endl;
			cout << "Podaj punkt w formacie : x,y,z ." << endl;
			getline(cin, line);

			int* sPoint ={};
			sPoint = splitStringIntoIntArr(line, ',');
			p1.setX(sPoint[0]);
			p1.setY(sPoint[1]);
			p1.setZ(sPoint[2]);

			int pz = p1.getZ();
			if(pz == 1)
				brd1.addPointToTable(p1);
			else if(pz == 2)
				brd2.addPointToTable(p1);
			else if(pz == 3)
			    brd3.addPointToTable(p1);
		}
		else if(round%2 == 1)
		{
			cout << "Ruch gracza nr : " << p2.getSign() << endl;
			cout << "Podaj punkt w formacie : x,y,z ." << endl;
			getline(cin, line);

			int* sPoint ={};
			sPoint = splitStringIntoIntArr(line, ',');
			p2.setX(sPoint[0]);
			p2.setY(sPoint[1]);
			p2.setZ(sPoint[2]);

			int pz = p2.getZ();
			if(pz == 1)
				brd1.addPointToTable(p2);
			else if(pz == 2)
				brd2.addPointToTable(p2);
			else if(pz == 3)
			    brd3.addPointToTable(p2);
		}
		showDesk(brd1,brd2,brd3);
		round += 1;
	}
	cout << "Gracz nr ";
	if(round%2 -1 == 0)
		cout << "1";
	else
		cout << "2";
	cout << " wygrał."<<endl;
	exit(0);
}
void showMenu()
{
	cout << "1. Start gry" << endl << "2. Wyjście" << endl;
	string ret = "0";
	getline(cin,ret);
	if(ret == "1")
	{
		startGame();
	}
	else if(ret == "2")
	{
		exit(0);
	}

}
int main()
{
	showMenu();
}

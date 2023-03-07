#include <iostream>
#include<Windows.h>
#include <utility>
#include "Line.h"

void setpos(int x, int y)
{
	COORD point = { x,y };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, point);
}


using namespace std;

Line::Line(int startX, int startY,int length) :startCoordinate(startX,startY),length(length){
}

Line::~Line() {
}


horizonLine::horizonLine(int startX, int startY, int length):Line(startX,startY,length)
{
	endCoordinate.first = startX + length;
	endCoordinate.second = startY;
}

horizonLine::~horizonLine() {
}

void horizonLine::print()
{
	for (int i = 0; i < length; i++)
	{
		setpos(startCoordinate.first + i, startCoordinate.second);
		cout << "x";
	}
}

void horizonLine::printxy() {
	cout << "	Horizon Line(begX:" << startCoordinate.first << ", endX" << endCoordinate.first << ", y:" << startCoordinate.second << ")" << endl;
}

verticalLine::verticalLine(int startX, int startY, int length) :Line(startX, startY, length)
{
	endCoordinate.first = startX;
	endCoordinate.second = startY + length;
}

verticalLine::~verticalLine() {
}

void verticalLine::print()
{
	for (int i = 0; i < length; i++)
	{
		setpos(startCoordinate.first, startCoordinate.second + i);
		cout << "x";
	}
}

void verticalLine::printxy() {
	cout << "	Vertical Line(x:" << startCoordinate.first << ", begY" << startCoordinate.second<< ", endY:" << endCoordinate.second << ")" << endl;
}

diagonalLine::diagonalLine(int startX, int startY, int length) :Line(startX, startY, length)
{
	endCoordinate.first = startX + length;
	endCoordinate.second = startY + length;
}

diagonalLine::~diagonalLine(){
}

void diagonalLine::print()
{
	for (int i = 0; i < length; i++)
	{
		setpos(startCoordinate.first + i, startCoordinate.second + i);
		cout << "x";
	}
}

void diagonalLine::printxy() {
	cout << "	Diagonal Line(leftup:["<< startCoordinate .first<<","<< startCoordinate .second<<"], rightdown:["<< endCoordinate.first<<","<< endCoordinate.second <<"])" << endl;
}

antiDiagonalLine::antiDiagonalLine(int startX, int startY, int length) :Line(startX, startY, length)
{
	endCoordinate.first = startX + length;
	endCoordinate.second = startY - length;
}

antiDiagonalLine::~antiDiagonalLine() {
}

void antiDiagonalLine::print()
{
	for (int i = 0; i < length; i++)
	{
		setpos(startCoordinate.first + i, startCoordinate.second - i);
		cout << "x";
	}
}

void antiDiagonalLine::printxy() {
	cout << "	Anti Diagonal Line(leftdown:[" << startCoordinate.first << "," << startCoordinate.second << "], rightup:[" << endCoordinate.first << "," << endCoordinate.second << "])" << endl;
}
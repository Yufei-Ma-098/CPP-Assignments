#include "Graph.h"
#include<Windows.h>
#include <iostream>

extern void setpos(int, int);

Graph::Graph(int x, int y) :LeftUpCoordinate(x, y)
{
}

Graph::~Graph()
{
	for (int i = 0; i < numberOfLines; i++) {
		delete lines[i];
	}
}

void Graph::print() {
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->print();
	}
	setpos(0, 15);
}

int Graph::getWidth() {
	return width;
}

A::A(int x, int y) :Graph(x, y) {
	numberOfLines = 5;
	width = 9;
	lines[0] = new antiDiagonalLine(x, y + 4, 5);
	lines[1] = new diagonalLine(x + 4, y, 5);
	lines[2] = new horizonLine(x, y + 5, 9);
	lines[3] = new verticalLine(x, y + 5, 5);
	lines[4] = new verticalLine(x + 8, y + 5, 5);
}

void A::printxy() {
	cout << "Alpha A(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}

A::~A() {
}

S::S(int x, int y) :Graph(x, y) {
	numberOfLines = 5;
	width = 8;
	lines[0] = new horizonLine(x, y, 8);
	lines[1] = new verticalLine(x, y, 5);
	lines[2] = new horizonLine(x, y + 4, 8);
	lines[3] = new verticalLine(x + 7, y + 4, 5);
	lines[4] = new horizonLine(x, y + 8, 8);
}

void S::printxy() {
	cout << "Alpha S(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}

S::~S() {

}

Y::Y(int x, int y) :Graph(x, y) {
	numberOfLines = 3;
	width = 7;
	lines[0] = new diagonalLine(x, y, 4);
	lines[1] = new antiDiagonalLine(x + 3, y + 3, 4);
	lines[2] = new verticalLine(x + 3, y + 3, 6);
}

void Y::printxy() {
	cout << "Alpha Y(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
	cout << endl;
}

Y::~Y() {

}

U::U(int x, int y) :Graph(x, y) {
	numberOfLines = 3;
	width = 10;
	lines[0] = new verticalLine(x, y, 8);
	lines[1] = new horizonLine(x + 1, y + 8, 8);
	lines[2] = new verticalLine(x + 9, y, 8);
}

void U::printxy() {
	cout << "Alpha U(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}

U::~U() {

}

Z::Z(int x, int y) :Graph(x, y) {
	numberOfLines = 3;
	width = 10;
	lines[0] = new horizonLine(x, y, 9);
	lines[1] = new antiDiagonalLine(x, y + 8, 9);
	lines[2] = new horizonLine(x, y + 8, 9);
}

void Z::printxy() {
	cout << "Alpha Z(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}

Z::~Z() {

}

Triangle::Triangle(int x, int y) :Graph(x, y) {
	numberOfLines = 3;
	width = 17;
	lines[0] = new antiDiagonalLine(x, y + 8, 9);
	lines[1] = new diagonalLine(x + 8, y,9);
	lines[2] = new horizonLine(x, y + 8, 17);
}

Triangle::~Triangle() {

}

void Triangle::printxy() {
	cout << "Graph Triangle(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}

rectangle::rectangle(int x, int y) :Graph(x, y){
	numberOfLines = 4;
	width = 11;
	lines[0] = new horizonLine(x, y , 11);
	lines[1] = new verticalLine(x , y, 9);
	lines[2] = new horizonLine(x, y + 8, 11);
	lines[3] = new verticalLine(x + 10, y, 9);
}

rectangle::~rectangle() {

}

void rectangle::printxy() {
	cout << "Graph Rectangle(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}

Fascist::Fascist(int x, int y) :Graph(x, y) {
	numberOfLines = 6;
	width = 10;
	lines[0] = new horizonLine(x, y, 5);
	lines[1] = new verticalLine(x + 4, y, 9);
	lines[2] = new horizonLine(x + 4, y + 8, 5);
	lines[3] = new verticalLine(x , y + 4, 5);
	lines[4] = new horizonLine(x, y + 4, 9);
	lines[5] = new verticalLine(x + 8, y , 5);
}

Fascist::~Fascist() {

}

void Fascist::printxy() {
	cout << "Graph Fascist(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}

Heart::Heart(int x, int y) :Graph(x, y) {
	numberOfLines = 6;
	width = 9;
	lines[0] = new antiDiagonalLine(x, y + 2 , 3);
	lines[1] = new diagonalLine(x , y + 3, 5);
	lines[2] = new antiDiagonalLine(x + 4, y + 7, 5);
	lines[3] = new diagonalLine(x + 6, y, 3);
	lines[4] = new antiDiagonalLine(x + 4, y + 1, 2);
	lines[5] = new diagonalLine(x + 3, y, 2);
}

Heart::~Heart() {

}

void Heart::printxy() {
	cout << "Graph Heart(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}

Star::Star(int x, int y) :Graph(x, y) {
	numberOfLines = 6;
	width = 13;
	lines[0] = new antiDiagonalLine(x, y + 6, 7);
	lines[1] = new horizonLine(x, y + 6, 13);
	lines[2] = new diagonalLine(x + 6, y, 7);
	lines[3] = new diagonalLine(x , y + 2, 7);
	lines[4] = new antiDiagonalLine(x + 6, y + 8, 7);
	lines[5] = new horizonLine(x , y + 2, 13);
}

Star::~Star() {

}

void Star::printxy() {
	cout << "Graph Star(leftup:[" << LeftUpCoordinate.first << "," << LeftUpCoordinate.second << "])" << endl;
	for (int i = 0; i < numberOfLines; i++) {
		lines[i]->printxy();
	}
}
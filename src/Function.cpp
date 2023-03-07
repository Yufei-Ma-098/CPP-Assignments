#include"Graph.h"
#include <vector>
#include<iostream>

using namespace std;

vector<Graph*> Graphs;

int tempX = 3;
int tempY = 3;

extern vector<Graph*> Graphs;



void printIntroduction() {
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Welcome to Drawing Board System!" << endl;
	cout << "This system is proudly producted by ÂíÓê·Æ£¨18342072£© and ÁõÖÇ±ó£¨18342063£©" << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl << endl;
}


void runSystem() {
	while (1) {
		cout << "Now please input an order corresponding to your wish." << endl << endl;
		cout << "0 for adding an alpha or a graph" << endl;
		cout << "1 for printing the information of coordinates of the alphas and patterns" << endl;
		cout << "2 for printing the images of all the alphas and patterns" << endl;
		cout << "-1 for quiting the system." << endl << endl;

		int order;
		cin >> order;

		if (order == 0) {
			system("cls");
			cout << "Alphas 'S' 'Y' 'U' 'A' 'Z' are available in this system." << endl;
			cout << "Patterns (0)Triangle (1)Rectangle (2)Fascist (3)Heart (4)Star are available in this system." << endl << endl;
			cout << "Now please input an available alpha or a number corresponding to the pattern you want." << endl;
			cout << "Input q if you want to return." << endl << endl;
			while (1) {
				char temp;
				cout << "Input->";
				cin >> temp;
				if (temp == 'q') {
					system("cls");
					cout << "Return successfully!" << endl << endl;
					break;
				}
				else {
					switch (temp) {
					case 'S':Graphs.push_back(new S(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case 'Y':Graphs.push_back(new Y(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case 'U':Graphs.push_back(new U(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case 'A':Graphs.push_back(new A(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case 'Z':Graphs.push_back(new Z(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case '0':Graphs.push_back(new Triangle(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case '1':Graphs.push_back(new rectangle(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case '2':Graphs.push_back(new Fascist(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case '3':Graphs.push_back(new Heart(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					case '4':Graphs.push_back(new Star(tempX, tempY)); tempX += Graphs.back()->getWidth() + 2; cout << "Add successfully!" << endl << endl; break;
					default:
						cout << "Illegal input!" << endl << endl;
					}
				}
			}
		}
		else if (order == 1) {
			system("cls");
			if (Graphs.empty()) {
				cout << "There is no graph!" << endl << endl;
			}
			else {
				for (int i = 0; i < Graphs.size(); i++) {
					Graphs[i]->printxy();
				}
				cout << endl << endl;
			}
		}
		else if (order == 2) {
			system("cls");
			if (Graphs.empty()) {
				cout << "There is no graph!" << endl << endl;
			}
			else {
				for (int i = 0; i < Graphs.size(); i++) {
					Graphs[i]->print();
				}
			}
		}
		else if (order == -1) {
			system("cls");
			cout << "Quit successfully!" << endl << endl;
			cout << "Thanks for using! Constructive advice is welcome!" << endl;
			break;
		}
	}
}
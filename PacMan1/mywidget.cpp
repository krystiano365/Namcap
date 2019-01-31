#include "mywidget.h"
#include "ui_mywidget.h"
#include <fstream>
#include <iostream>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
	loadMap();
	//prepareObjects();
}

MyWidget::~MyWidget()
{

}

void MyWidget::loadMap(){
	using namespace std;
	try{
		ifstream file(CURDIR + "utils/map.txt");
		string line;
		while(file>>line){
			mapArray.push_back(line);
		}
		cout<< "map width is now: " + to_string(mapArray.size()) << endl;
	} catch(exception &e) {
		cout<<e.what();
		abort();
	}
}

void MyWidget::prepareObjects() {
	for(unsigned int c = 0; c < mapArray.at(0).size(); c++){
		for(unsigned int r = 0; r < mapArray.size(); r++){
			switch (mapArray[r][c]){

			case '-':	//horizontal wall
				break;
			case '|':	//vertical wall
				break;
			case 'x':	//void
				break;
			case '.':	//point
				break;
			case 'o':   //big point
				break;
			}
		}
	}
}

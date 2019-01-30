#include "mywidget.h"
#include "ui_mywidget.h"
#include <fstream>
#include <iostream>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
	loadMap();

}

MyWidget::~MyWidget()
{

}

void MyWidget::loadMap(){
	using namespace std;
	try{
		ifstream file("map.txt");
		string line;
		while(file){
			file>>line;
			mapArray.push_back(line);
		}
	} catch(exception &e) {
		cout<<e.what();
		abort();
	}
}

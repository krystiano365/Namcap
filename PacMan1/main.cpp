#include "mywidget.h"
#include "consts.h"
#include <QApplication>
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyWidget w;
	w.setFixedSize(TILE_W*MAP_W, TILE_H*MAP_H);
	w.show();

	return a.exec();
}

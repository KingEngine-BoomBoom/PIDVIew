//#include "PIDViews.h"
#include "stdafx.h"
//#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	//AllocConsole();		//新建控制台打印信息
	//FILE* stream;
	//freopen_s(&stream, "CONOUT$", "w", stdout);//重定向输出流
    QApplication a(argc, argv);
    PIDViews w;
    w.show();
    return a.exec();
}

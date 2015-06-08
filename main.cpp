#include<iostream>
#include <QApplication>
#include <QDesktopWidget>
#include "window.h"

using namespace std;

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Window window;
    //window.resize(window.sizeHint());
    //int desktopArea = QApplication::desktop()->width() * QApplication::desktop()->height();
    //int widgetArea = window.width() * window.height();
    //if (((float)widgetArea / (float)desktopArea) < 0.75f)
    window.show();
    //else
        //window.showMaximized();
    return app.exec();
    return 0;
}


//http://microtechnics.ru/opengl-urok-2-risovanie-2d-figur/
